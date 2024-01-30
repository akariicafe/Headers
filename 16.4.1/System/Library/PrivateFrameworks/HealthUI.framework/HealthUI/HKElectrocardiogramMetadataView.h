@class HKElectrocardiogram;
@protocol HKElectrocardiogramMetadataViewDelegate;

@interface HKElectrocardiogramMetadataView : UIView

@property (readonly, nonatomic) HKElectrocardiogram *sample;
@property (readonly, nonatomic) BOOL displayGraph;
@property (readonly, nonatomic) BOOL allowExportToPDF;
@property (readonly, nonatomic) BOOL isSharedData;
@property (weak, nonatomic) id<HKElectrocardiogramMetadataViewDelegate> delegate;

- (void).cxx_destruct;
- (id)_footerLabel;
- (void)detailButtonTapped:(id)a0;
- (id)_separatorLine;
- (id)_bulletedTextView;
- (id)_ecgChart;
- (void)_setupUIWithActiveAlgorithmVersion:(long long)a0;
- (id)_sharePDFControl;
- (id)initWithSample:(id)a0 activeAlgorithmVersion:(long long)a1 displayGraph:(BOOL)a2 allowExportToPDF:(BOOL)a3 isSharedData:(BOOL)a4 delegate:(id)a5;
- (void)sharedPDFControlTapped:(id)a0;

@end
