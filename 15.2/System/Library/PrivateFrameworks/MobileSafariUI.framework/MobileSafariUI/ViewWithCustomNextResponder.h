@class UIResponder;

@interface ViewWithCustomNextResponder : UIView

@property (weak, nonatomic) UIResponder *customNextResponder;

- (id)nextResponder;
- (void).cxx_destruct;

@end
