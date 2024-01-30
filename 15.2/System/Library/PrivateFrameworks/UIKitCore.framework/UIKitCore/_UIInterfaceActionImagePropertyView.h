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

- (struct CGSize { double x0; double x1; })_sizeToOccupy;
- (void)_applyVisualStyle;
- (id)initWithAction:(id)a0 imageProperty:(id)a1;
- (id)_interfaceActionViewState;
- (void).cxx_destruct;
- (void)_applyVisualStyleToImageView;
- (void)_reloadImageContent;
- (id)_visualStyle;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)setImage:(id)a0;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;

@end
