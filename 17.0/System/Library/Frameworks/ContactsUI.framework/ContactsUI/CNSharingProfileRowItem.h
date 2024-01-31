@class NSString, UIView;

@interface CNSharingProfileRowItem : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL isSelected;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 accessoryView:(id)a1;

@end
