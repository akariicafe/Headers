@class NSSet;

@interface SBSwitcherKeyboardSuppressionMode : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *appLayouts;

+ (id)suppressionModeNone;
+ (id)suppressionModeForAllScenes;
+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)suppressesSwitcherScenesOnly;
- (BOOL)suppressesAllScenes;
- (id)_initWithAppLayouts:(id)a0 suppressionType:(long long)a1;
- (BOOL)suppressesNoScenes;

@end
