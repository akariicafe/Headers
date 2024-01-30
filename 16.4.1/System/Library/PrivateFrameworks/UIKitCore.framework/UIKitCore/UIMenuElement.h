@class NSString, UIAction, UIImage, NSAttributedString;
@protocol _UIMenuImageOrName;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {
    NSString *_accessibilityIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _isLeaf;
@property (readonly, nonatomic) BOOL _isLoadingPlaceholder;
@property (readonly, nonatomic) id<_UIMenuImageOrName> _imageOrName;
@property (copy, nonatomic) UIAction *_accessoryAction;
@property (nonatomic, setter=_setPreferredDisplayMode:) unsigned long long _preferredDisplayMode;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;

- (void)_setTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)accessibilityIdentifier;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (BOOL)_isVisible;
- (void)_setSubtitle:(id)a0;
- (void)_setImage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_immutableCopy;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (BOOL)_canBeHighlighted;
- (id)_customContentView;
- (BOOL)_isInlineGroup;
- (id)_mutableCopy;
- (BOOL)_omitsInlineTitle;
- (void)_willBePreparedForInitialDisplay:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2;

@end
