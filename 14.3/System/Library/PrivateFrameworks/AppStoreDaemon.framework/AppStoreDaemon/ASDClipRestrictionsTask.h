@class NSDictionary, NSDate;

@interface ASDClipRestrictionsTask : NSObject

@property (copy, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSDate *verificationDate;
@property (readonly) BOOL hasErrorStatus;
@property (readonly, nonatomic) long long responseCode;

- (BOOL)hasResponseFlag:(long long)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_verifyRequest;
- (id)initWithDictionary:(id)a0 verificationDate:(id)a1;
- (id)initWithClipRequest:(id)a0;
- (id)initWithClipRequest:(id)a0 verificationDate:(id)a1;

@end
