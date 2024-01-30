@class UIImageView, NSString;

@interface AKUserInterfaceItemTableViewCell : UITableViewCell <AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable>

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)wantsInkUpdate;

@end
