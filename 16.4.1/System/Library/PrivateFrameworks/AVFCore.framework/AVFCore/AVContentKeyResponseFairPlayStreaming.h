@class NSData, NSDate;

@interface AVContentKeyResponseFairPlayStreaming : AVContentKeyResponse {
    NSData *_keyData;
    NSDate *_renewalDate;
}

- (void)dealloc;
- (id)initWithKeyData:(id)a0 renewalDate:(id)a1;

@end
