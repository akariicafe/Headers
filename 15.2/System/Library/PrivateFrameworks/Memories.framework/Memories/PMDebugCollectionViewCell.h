@class NSString, UIImageView, PHAsset, UILabel;
@protocol PMDebugCollectionViewControllerProtocol;

@interface PMDebugCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) id<PMDebugCollectionViewControllerProtocol> delegate;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *data1Label;
@property (retain, nonatomic) UILabel *data2Label;
@property (retain, nonatomic) UILabel *data3Label;
@property (retain, nonatomic) UILabel *date1Label;
@property (retain, nonatomic) UILabel *date2Label;
@property (retain, nonatomic) UILabel *date3Label;
@property (retain, nonatomic) NSString *editStyleStr;

+ (BOOL)hasOneGBRAM;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureWithAsset:(id)a0 pickInfo:(id)a1 delegate:(id)a2 indexPath:(id)a3 isSaveMode:(BOOL)a4 textOnly:(BOOL)a5 curatedAssets:(id)a6;
- (void)configureHeader:(BOOL)a0;
- (void)strokeToverMaxT:(float)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_stingerTime;
- (unsigned long long)countMediaClips:(BOOL)a0;
- (id)tVsDurationGraph;
- (id)stringForAssetCollectionSubType:(long long)a0;
- (id)stringForAssetCollectionTypeString:(long long)a0;
- (id)stringForSize:(unsigned long long)a0;
- (id)_printImageOrientationforAsset:(id)a0;
- (id)determineDerivativeUsedFromAsset:(id)a0;

@end
