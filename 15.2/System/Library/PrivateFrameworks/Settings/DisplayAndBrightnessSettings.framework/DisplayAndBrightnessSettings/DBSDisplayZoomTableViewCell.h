@class NSString, DBSDisplayZoomOptionView;
@protocol DBSDisplayZoomTableViewCellDelegate;

@interface DBSDisplayZoomTableViewCell : UITableViewCell <DBSDisplayZoomOptionViewDelegate>

@property (retain, nonatomic) DBSDisplayZoomOptionView *standardOptionView;
@property (retain, nonatomic) DBSDisplayZoomOptionView *zoomedOptionView;
@property (weak, nonatomic) id<DBSDisplayZoomTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (void)startAnimation;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)stopAnimation;
- (void)_configureView;
- (void)updateSelectedViewWithOption:(unsigned long long)a0;
- (void)userDidTapOnDisplayZoomOptionView:(id)a0;

@end
