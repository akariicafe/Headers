@class UILabel, NSNumber;

@interface HUSetupCodeFieldItem : UIView

@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) UILabel *digitLabel;
@property (nonatomic) unsigned long long itemNumber;
@property (retain, nonatomic) NSNumber *value;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;

@end
