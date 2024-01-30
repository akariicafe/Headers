@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer

@property (nonatomic) double touchBasedAllowableMovement;
@property (retain, nonatomic) NSArray *touchesForTap;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
