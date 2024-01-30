@class HKElectrocardiogram;
@protocol HKElectrocardiogramMetadataViewDelegate;

@interface HKElectrocardiogramMetadataView : UIView

@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (weak, nonatomic) id<HKElectrocardiogramMetadataViewDelegate> delegate;

- (void).cxx_destruct;
- (id)_footerLabel;
- (id)_separatorLine;
- (void)detailButtonTapped:(id)a0;
- (void)_setupUIWithActiveAlgorithmVersion:(long long)a0;
- (id)_ecgChart;
- (id)_bulletedTextView;
- (id)_sharePDFControl;
- (void)sharedPDFControlTapped:(id)a0;
- (id)initWithSample:(id)a0 activeAlgorithmVersion:(long long)a1 delegate:(id)a2;

@end
