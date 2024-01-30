@class NSString, UIImage;
@protocol _UIMenuImageOrName;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {
    NSString *_accessibilityIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isLeaf;
@property (readonly, nonatomic) BOOL isLoadingPlaceholder;
@property (readonly, nonatomic) id<_UIMenuImageOrName> imageOrName;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;

- (void)_setTitle:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (BOOL)_isVisible;
- (void)encodeWithCoder:(id)a0;
- (void)_willBePreparedForInitialDisplay:(id)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)accessibilityIdentifier;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (void)_setSubtitle:(id)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)_mutableCopy;
- (void).cxx_destruct;
- (BOOL)_canBeHighlighted;
- (id)_customContentView;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isInlineGroup;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2;
- (void)_setImage:(id)a0;

@end
