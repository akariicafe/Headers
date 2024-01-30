@class NSString;

@interface sec_record_nonce_set : NSObject <OS_sec_record_nonce_set> {
    unsigned long long replay_window_size;
    unsigned long long bitmap;
    unsigned long long max_nonce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)should_discard:(unsigned long long)a0;
- (void)add_nonce:(unsigned long long)a0;

@end
