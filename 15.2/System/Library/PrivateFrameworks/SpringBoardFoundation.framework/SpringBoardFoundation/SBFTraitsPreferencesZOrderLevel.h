@class NSString;

@interface SBFTraitsPreferencesZOrderLevel : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (nonatomic) double preferredZOrderLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithPreferredZOrderLevel:(double)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqualToZOrderLevelPreferences:(id)a0;
- (id)initWithZOrderLevelPreferences:(id)a0;

@end
