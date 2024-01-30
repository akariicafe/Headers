@class NSString, UIView;
@protocol PLPlatter, CSAdjunctItemHosting;

@interface CSAdjunctItemView : UIView <MTMaterialGrouping> {
    long long _recipe;
    UIView<PLPlatter> *_platterView;
    BOOL _isContentHostPlatterView;
}

@property (nonatomic) struct CGSize { double width; double height; } sizeToMimic;
@property (weak, nonatomic) id<CSAdjunctItemHosting> contentHost;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecipe:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSizeToMimic;
- (void)_setPlatterView:(id)a0;

@end
