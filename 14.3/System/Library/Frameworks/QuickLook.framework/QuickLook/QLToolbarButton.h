@class NSString, NSArray, UIImage, QLToolbarButtonItemRepresentation, UIAlertController;

@interface QLToolbarButton : NSObject <NSSecureCoding> {
    QLToolbarButtonItemRepresentation *_currentItemRepresentation;
    UIAlertController *_alertController;
    id _target;
    SEL _action;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (copy) UIImage *image;
@property (copy, nonatomic) NSString *symbolImageName;
@property long long systemItem;
@property (copy) NSString *title;
@property (copy) NSString *accessibilityIdentifier;
@property (copy) NSArray *options;
@property unsigned long long placement;
@property BOOL useInternalSymbolImage;
@property BOOL forceToNavBar;
@property BOOL selected;
@property BOOL enabled;
@property BOOL roundedSelectedIndicator;
@property BOOL disappearsOnTap;

- (id)init;
- (void).cxx_destruct;
- (void)handleLongPress:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_barButtonImage;
- (void)invalidateCurrentState;
- (BOOL)isEqual:(id)a0;
- (id)barButtonWithTarget:(id)a0 action:(SEL)a1 maxSize:(struct CGSize { double x0; double x1; })a2;
- (void)encodeWithCoder:(id)a0;

@end
