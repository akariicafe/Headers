@class NSArray, NSString, PXReusableObjectPool, UIView, NSObject, PXGBasicAXGroup;
@protocol UIFocusEnvironment, UIFocusItemContainer, PXDisplayAsset, PXAnonymousView;

@interface PXGReusableAXInfo : NSObject <UIFocusItem, PXGAXInfo, PXReusableObject> {
    id _content;
}

@property (class, readonly, nonatomic) PXReusableObjectPool *sharedPool;

@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long axContentKind;
@property (weak, nonatomic) PXGBasicAXGroup *axContainingGroup;
@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) struct { struct { double x; double y; float z; } center; void /* unknown type, empty encoding */ size; } spriteGeometry;
@property (nonatomic) long long alternateUIVisibility;
@property (nonatomic) BOOL allowDecorations;
@property (retain, nonatomic) NSArray *axDecorations;
@property (readonly, nonatomic) NSString *axText;
@property (readonly, nonatomic) NSString *axTitle;
@property (readonly, nonatomic) NSString *axSubtitle;
@property (readonly, nonatomic) NSString *axImageName;
@property (readonly, nonatomic) id<PXDisplayAsset> axAsset;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *axView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axFrame;
@property (readonly, nonatomic) BOOL axIsSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imageNameInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_textInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_titleSubtitleInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (Class)_viewClassInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (BOOL)_assetHasContentSourceInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_fillForKind:(long long)a0 withLayout:(id)a1 spriteIndex:(unsigned int)a2;
- (void)prepareForReuse;
- (void)applyToInfo:(id)a0;
- (void)becomeReusable;
- (void)setContent:(id)a0 ofContentKind:(long long)a1;
- (BOOL)fillContentForContentKind:(long long)a0 inLayout:(id)a1 atIndex:(unsigned int)a2;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (id)_viewAtSpriteIndex:(unsigned int)a0;

@end
