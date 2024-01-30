@class UIWindow, NSArray, UIView, UITraitCollection;
@protocol _UITraitEnvironmentInternal;

@interface _UIContextMenuStyle : NSObject <NSCopying>

@property (nonatomic, getter=_preferredAnchor) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } _preferredAnchor;
@property (nonatomic, getter=_preferredMenuAttachmentPoint) struct CGPoint { double x; double y; } _preferredMenuAttachmentPoint;
@property (nonatomic, getter=_allowsImmediateSelection) BOOL _allowsImmediateSelection;
@property (nonatomic, getter=_shouldAvoidInputViews) BOOL _shouldAvoidInputViews;
@property (nonatomic, getter=_orderMenuBasedOnPriority) BOOL _orderMenuBasedOnPriority;
@property (retain, nonatomic, getter=_parentTraitEnvironmentForUserInterfaceStyle) id<_UITraitEnvironmentInternal> _parentTraitEnvironmentForUserInterfaceStyle;
@property (nonatomic, getter=_preferredMenuWidth) double _preferredMenuWidth;
@property (readonly, nonatomic, getter=_layoutAllowsPreview) BOOL _layoutAllowsPreview;
@property (readonly, nonatomic, getter=_layoutAllowsMenu) BOOL _layoutAllowsMenu;
@property (nonatomic) BOOL prefersStackedHierarchy;
@property (nonatomic) unsigned long long preferredAttachmentEdge;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
