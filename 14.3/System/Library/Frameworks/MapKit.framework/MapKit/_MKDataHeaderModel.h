@class MKTransitInfoLabelView, _MKLineHeaderModel, UIView;

@interface _MKDataHeaderModel : NSObject

@property (weak, nonatomic) UIView *ownerView;
@property (retain, nonatomic) _MKLineHeaderModel *firstLine;
@property (retain, nonatomic) _MKLineHeaderModel *secondLine;
@property (retain, nonatomic) _MKLineHeaderModel *thirdLine;
@property (retain, nonatomic) _MKLineHeaderModel *forthLine;
@property (retain, nonatomic) MKTransitInfoLabelView *transitLabel;
@property (retain, nonatomic) _MKLineHeaderModel *secondaryNameLine;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
