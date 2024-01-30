@class NSSet;

@interface SBSwitcherKeyboardSuppressionMode : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *appLayouts;
@property (nonatomic) BOOL applyAssertionEvenIfAppIsHostingTheKeyboard;

+ (id)suppressionModeForAllScenes;
+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)a0;
+ (id)suppressionModeNone;

- (id)_initWithAppLayouts:(id)a0 suppressionType:(long long)a1;
- (BOOL)suppressesSwitcherScenesOnly;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)suppressesNoScenes;
- (void).cxx_destruct;
- (BOOL)suppressesAllScenes;

@end
