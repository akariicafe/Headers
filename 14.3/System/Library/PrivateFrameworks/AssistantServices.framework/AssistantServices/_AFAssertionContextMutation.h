@class NSString, AFAssertionContext, NSDictionary, NSDate;

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating> {
    AFAssertionContext *_baseModel;
    unsigned long long _timestamp;
    NSString *_reason;
    NSDate *_effectiveDate;
    double _expirationDuration;
    NSDictionary *_userInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimestamp : 1; unsigned char hasReason : 1; unsigned char hasEffectiveDate : 1; unsigned char hasExpirationDuration : 1; unsigned char hasUserInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setUserInfo:(id)a0;
- (void)setReason:(id)a0;
- (id)generate;
- (void)setEffectiveDate:(id)a0;
- (void)setExpirationDuration:(double)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (id)initWithBaseModel:(id)a0;

@end
