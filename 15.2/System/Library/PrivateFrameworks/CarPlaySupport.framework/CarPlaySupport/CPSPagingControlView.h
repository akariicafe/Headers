@class NSString, NSNumberFormatter, UILabel, UIButton;
@protocol CPSPageControlling;

@interface CPSPagingControlView : UIView <CPSLinearFocusProviding>

@property (retain, nonatomic) UILabel *positionLabel;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long pageCount;
@property (retain, nonatomic) UIButton *previousButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (weak, nonatomic) id<CPSPageControlling> pagingDelegate;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateImages;
- (void)_update;
- (id)_linearFocusItems;
- (void)_handlePreviousButton:(id)a0;
- (void)_handleNextButton:(id)a0;
- (void)_invokeDelegateForPageIndex:(unsigned long long)a0;
- (void)enablePageControlsIfNecessary;

@end
