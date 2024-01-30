@class NSString;

@interface TFFeedbackHandleConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *incidentId;

+ (id)configurationFromUserInfo:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithBundleURL:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedAsUserInfo;

@end
