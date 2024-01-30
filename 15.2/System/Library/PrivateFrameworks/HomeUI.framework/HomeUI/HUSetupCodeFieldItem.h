@class UILabel, NSNumber;

@interface HUSetupCodeFieldItem : UIView

@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) UILabel *digitLabel;
@property (nonatomic) unsigned long long itemNumber;
@property (retain, nonatomic) NSNumber *value;

- (void)clear;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)deactivate;

@end
