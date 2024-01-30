@class NSString, sec_record_framer, sec_record_nonce_set;

@interface sec_record : NSObject <OS_sec_record> {
    unsigned char key[32];
    unsigned char integrity_key[32];
    unsigned char write_nonce[16];
    unsigned char read_nonce[16];
    unsigned char nonce[16];
    unsigned long long key_length;
    unsigned long long integrity_key_length;
    unsigned long long tag_length;
    unsigned long long nonce_length;
    int aead;
    unsigned char padding : 1;
    unsigned long long padded_size;
    sec_record_framer *framer;
    sec_record_nonce_set *nonce_set;
    id /* block */ key_update;
    id /* block */ ready_key_update;
    unsigned long long plaintext_limit;
    unsigned long long aad_limit;
    unsigned long long read_seq_number;
    unsigned long long write_seq_number;
    unsigned long long seq_limit;
    unsigned long long message_limit;
    unsigned char read_ready : 1;
    unsigned char write_ready : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
