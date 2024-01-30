@class NSDictionary, NSDate;

@interface ASDClipRestrictionsTask : NSObject

@property (copy, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSDate *verificationDate;
@property (readonly) BOOL hasErrorStatus;
@property (readonly, nonatomic) long long responseCode;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasResponseFlag:(long long)a0;
- (id)initWithDictionary:(id)a0 verificationDate:(id)a1;
- (void)_verifyRequest;
- (id)initWithClipRequest:(id)a0;
- (id)initWithClipRequest:(id)a0 verificationDate:(id)a1;

@end
