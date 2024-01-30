@class NSString, PLPlatterView;
@protocol CSAdjunctItemHosting;

@interface CSAdjunctItemView : UIView <BSDescriptionProviding, MTMaterialGrouping> {
    long long _recipe;
    BOOL _isContentHostPlatterView;
}

@property (nonatomic) struct CGSize { double width; double height; } sizeToMimic;
@property (weak, nonatomic) id<CSAdjunctItemHosting> contentHost;
@property (readonly, weak, nonatomic) PLPlatterView *platterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithRecipe:(long long)a0;
- (void)_updateSizeToMimic;
- (void)_setPlatterView:(id)a0;

@end
