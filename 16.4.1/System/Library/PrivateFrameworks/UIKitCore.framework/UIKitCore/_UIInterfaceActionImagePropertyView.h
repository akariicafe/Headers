@class NSString, UIInterfaceAction, NSLayoutConstraint;

@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver> {
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
}

@property (readonly, nonatomic) UIInterfaceAction *action;
@property (readonly, nonatomic) NSString *imageProperty;
@property (readonly, nonatomic) BOOL isUsedToOccupySpaceIfNoImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_visualStyle;
- (void)setImage:(id)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToImageView;
- (id)_interfaceActionViewState;
- (void)_reloadImageContent;
- (struct CGSize { double x0; double x1; })_sizeToOccupy;
- (id)initWithAction:(id)a0 imageProperty:(id)a1;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;

@end
