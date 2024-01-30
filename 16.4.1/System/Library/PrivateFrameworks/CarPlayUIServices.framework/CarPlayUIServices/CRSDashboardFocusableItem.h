@class NSUUID, UIView;
@protocol CRSUIDashboardFocusableItemProviding;

@interface CRSDashboardFocusableItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInWindow;
@property (weak, nonatomic) UIView<CRSUIDashboardFocusableItemProviding> *focusProvidingItem;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFocusableView:(id)a0;

@end
