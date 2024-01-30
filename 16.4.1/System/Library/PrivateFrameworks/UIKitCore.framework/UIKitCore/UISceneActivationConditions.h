@class UIScene, NSPredicate;

@interface UISceneActivationConditions : NSObject <NSCopying, NSSecureCoding> {
    NSPredicate *_canActivatePredicate;
    NSPredicate *_prefersPredicate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setUIScene:) UIScene *_UIScene;
@property (copy, nonatomic) NSPredicate *canActivateForTargetContentIdentifierPredicate;
@property (copy, nonatomic) NSPredicate *prefersToActivateForTargetContentIdentifierPredicate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_suitabilityForTargetContentIdentifier:(id)a0 errorString:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validateCompileTimeIssues:(id *)a0 runTimeIssues:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
