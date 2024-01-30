@class NSString;

@interface VCPFingerprint : NSObject

@property (readonly) NSString *master;
@property (readonly) NSString *adjusted;

+ (id)fingerprintWithMaster:(id)a0 adjusted:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToFingerprint:(id)a0;
- (id)initWithMaster:(id)a0 adjusted:(id)a1;

@end
