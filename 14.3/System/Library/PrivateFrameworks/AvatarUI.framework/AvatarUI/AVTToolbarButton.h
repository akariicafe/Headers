@class NSString;

@interface AVTToolbarButton : UIButton

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isDefault;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDefault:(BOOL)a1;

@end
