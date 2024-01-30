@class NSSet;

@interface SBSwitcherKeyboardSuppressionMode : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *appLayouts;
@property (nonatomic) BOOL applyAssertionEvenIfAppIsHostingTheKeyboard;

+ (id)suppressionModeNone;
+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)a0;
+ (id)suppressionModeForAllScenes;

- (id)_initWithAppLayouts:(id)a0 suppressionType:(long long)a1;
- (BOOL)suppressesAllScenes;
- (BOOL)suppressesNoScenes;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)suppressesSwitcherScenesOnly;
- (unsigned long long)hash;

@end
