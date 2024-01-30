@class NSString;

@interface AEAssessmentApplication : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (nonatomic) BOOL requiresSignatureValidation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
