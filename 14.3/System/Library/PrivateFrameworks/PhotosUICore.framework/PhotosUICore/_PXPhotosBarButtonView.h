@class NSString, PXPhotosViewModel, PXUpdater, _PXPhotosBarButtonSpecManager, PXCuratedLibraryOverlayButton, UIBarButtonItem;

@interface _PXPhotosBarButtonView : UIView <PXChangeObserver>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long systemItem;
@property (readonly, nonatomic) NSString *systemIconImageName;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryOverlayButton *button;
@property (readonly, nonatomic) PXUpdater *updater;
@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 orSystemItem:(long long)a1 orSystemIconName:(id)a2 target:(id)a3 action:(SEL)a4 specManager:(id)a5 viewModel:(id)a6;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_createButtonConfiguration;
- (void)_updateButtons;
- (void)layoutSubviews;
- (void)_handleAction;
- (void)_invalidateButtons;

@end
