@class UIColor, NSString, NSSet, UIImage, PXCuratedLibrarySectionHeaderLayoutSpec, PXCuratedLibraryActionPerformer, NSCache;

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject <PXGViewUserData>

@property (class, readonly, nonatomic) NSCache *tintedImageCache;

@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, nonatomic) UIColor *highlightedContentColor;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIImage *iconImageWithoutConfiguration;
@property (readonly, nonatomic) UIImage *tintedIconImage;
@property (readonly, nonatomic) UIImage *highlightedIconImage;
@property (readonly, nonatomic) NSString *accessibilityTitle;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *actionPerformer;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ menuActionHandler;
@property (copy, nonatomic) id /* block */ willDisplayMenuActionHandler;
@property (copy, nonatomic) id /* block */ willDismissMenuActionHandler;
@property (nonatomic) long long style;
@property (nonatomic) long long segment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestOutsets;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSSet *possibleTitles;
@property (copy, nonatomic) NSString *caption;
@property (nonatomic) BOOL forcePointerInteractionEnabled;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithSystemImageName:(id)a0 spec:(id)a1;
+ (id)configurationWithButtonType:(long long)a0 spec:(id)a1;
+ (id)configurationWithSystemImageName:(id)a0 title:(id)a1 spec:(id)a2;
+ (id)configurationWithTitle:(id)a0 spec:(id)a1;
+ (id)configurationWithButtonType:(long long)a0 title:(id)a1 spec:(id)a2;

- (id)largeContentViewerImage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_contentColorWhenHighlighted:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemImageName:(id)a0 title:(id)a1 spec:(id)a2 buttonType:(long long)a3;
- (void)prepareForRender;
- (id)init;
- (void).cxx_destruct;
- (id)_tintedImage:(id)a0 name:(id)a1 withColor:(id)a2;

@end
