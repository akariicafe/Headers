@class NSArray;

@interface PKTextInputTextPlaceholder : UITextPlaceholder

@property (retain, nonatomic) id placeholder;
@property (nonatomic) BOOL shouldIgnoreOrigin;
@property (retain, nonatomic) NSArray *_rects;

+ (id)placeholderWithWebTextPlaceholder:(id)a0;
+ (id)placeholderWithToken:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)placeholderWithTextPlaceholder:(id)a0;
+ (id)placeholderWithText:(id)a0 rects:(id)a1;

- (id)rects;
- (void).cxx_destruct;

@end
