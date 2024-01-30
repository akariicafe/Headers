@class UILabel;

@interface STNoUsageDataView : UIView

@property (readonly, nonatomic) UILabel *noDataDetailTextLabel;
@property (nonatomic, getter=isLocalDevice) BOOL localDevice;

- (void).cxx_destruct;
- (id)initWithPreferredFontTextStyle:(id)a0;

@end
