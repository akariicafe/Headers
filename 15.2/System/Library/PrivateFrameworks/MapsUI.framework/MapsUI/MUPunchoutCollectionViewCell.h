@class NSString, MUPunchoutViewModel, MUPunchoutView;

@interface MUPunchoutCollectionViewCell : UICollectionViewCell <MKActivityObserving> {
    MUPunchoutView *_punchoutView;
}

@property (retain, nonatomic) MUPunchoutViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setupContentView;

@end
