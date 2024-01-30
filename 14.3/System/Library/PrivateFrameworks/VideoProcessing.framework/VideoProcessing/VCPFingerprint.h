@class NSString;

@interface VCPFingerprint : NSObject

@property (readonly) NSString *master;
@property (readonly) NSString *adjusted;

+ (id)fingerprintWithMaster:(id)a0 adjusted:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMaster:(id)a0 adjusted:(id)a1;
- (BOOL)isEqualToFingerprint:(id)a0;

@end
