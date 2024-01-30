@class NSString, UIView;

@interface CNMeCardSharingRowItem : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL isSelected;
@property (readonly, copy, nonatomic) id /* block */ confirmationHandler;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 accessoryView:(id)a1;
- (id)initWithLabel:(id)a0 accessoryView:(id)a1 confirmationHandler:(id /* block */)a2;

@end
