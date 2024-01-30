@class UIResponder, NSMutableArray;
@protocol SKUIComposeTextFieldListViewDelegate;

@interface SKUIComposeTextFieldListView : UIView {
    NSMutableArray *_fields;
    BOOL _isValid;
}

@property (readonly, nonatomic) long long composeReviewStyle;
@property (weak, nonatomic) id<SKUIComposeTextFieldListViewDelegate> delegate;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) UIResponder *initialFirstResponder;

- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isValid;
- (void)_updateValidity;
- (id)textForFieldAtIndex:(unsigned long long)a0;
- (void)composeTextFieldValidityChanged:(id)a0;

@end
