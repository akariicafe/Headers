@class NSString;

@interface sec_record_buffer : NSObject <OS_sec_record_buffer> {
    unsigned long long header_size;
    char *header;
    unsigned long long payload_size;
    char *payload;
    unsigned char tag[32];
    unsigned long long tag_size;
    unsigned char finalized : 1;
    unsigned char owned : 1;
    unsigned char __pad_bits : 6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init:(unsigned long long)a0 payload_size:(unsigned long long)a1 tag_size:(unsigned long long)a2;
- (id)initFromBytes:(char *)a0 header_size:(unsigned long long)a1 payload:(char *)a2 payload_size:(unsigned long long)a3 tag_size:(unsigned long long)a4;

@end
