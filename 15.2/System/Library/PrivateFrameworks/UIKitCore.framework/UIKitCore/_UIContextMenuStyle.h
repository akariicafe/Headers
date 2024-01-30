@class UIWindow, NSArray, UIView, UITraitCollection;
@protocol _UITraitEnvironmentInternal;

@interface _UIContextMenuStyle : NSObject <NSCopying>

@property (nonatomic, getter=_preferredAnchor) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } _preferredAnchor;
@property (nonatomic, getter=_allowsImmediateSelection) BOOL _allowsImmediateSelection;
@property (nonatomic, getter=_shouldAvoidInputViews) BOOL _shouldAvoidInputViews;
@property (retain, nonatomic, getter=_parentTraitEnvironmentForUserInterfaceStyle) id<_UITraitEnvironmentInternal> _parentTraitEnvironmentForUserInterfaceStyle;
@property (readonly, nonatomic, getter=_layoutAllowsPreview) BOOL _layoutAllowsPreview;
@property (readonly, nonatomic, getter=_layoutAllowsMenu) BOOL _layoutAllowsMenu;
@property (retain, nonatomic) UIWindow *containerWindow;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredEdgeInsets;
@property (nonatomic) BOOL hasInteractivePreview;
@property (nonatomic) BOOL preventPreviewRasterization;
@property (nonatomic) BOOL reversesActionOrderWhenAttachedToTop;
@property (nonatomic) BOOL previewOverlapsMenu;
@property (nonatomic) BOOL ignoresContainerSizeChange;
@property (nonatomic) BOOL prefersCenteredPreviewWhenActionsAreAbsent;
@property (nonatomic) BOOL keepsInputViewsVisible;
@property (nonatomic) BOOL ignoresDefaultSizingRules;
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection;
@property (retain, nonatomic) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredBackgroundInsets;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
