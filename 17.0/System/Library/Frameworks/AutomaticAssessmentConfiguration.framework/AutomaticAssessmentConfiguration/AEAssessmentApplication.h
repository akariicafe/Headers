@class NSString;

@interface AEAssessmentApplication : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (nonatomic) BOOL requiresSignatureValidation;

+ (id)__applicationWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1;
+ (id)instanceFromApplicationDescriptor:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__bundleIdentifier;
- (BOOL)__requiresSignatureValidation;
- (id)__teamIdentifier;
- (id)applicationDescriptor;
- (id)initWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1;
- (void)set__requiresSignatureValidation:(BOOL)a0;

@end
