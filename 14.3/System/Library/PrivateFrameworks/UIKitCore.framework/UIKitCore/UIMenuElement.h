@class NSString, UIImage;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {
    NSString *_accessibilityIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isLeaf;
@property (readonly, nonatomic) BOOL isLoadingPlaceholder;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) UIImage *imageIfLoaded;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;

- (void)_setImage:(id)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void)_setTitle:(id)a0;
- (BOOL)_isVisible;
- (id)_mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (id)_immutableCopy;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (BOOL)_isInlineGroup;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)accessibilityIdentifier;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2;
- (BOOL)_canBeHighlighted;
- (void)encodeWithCoder:(id)a0;

@end
