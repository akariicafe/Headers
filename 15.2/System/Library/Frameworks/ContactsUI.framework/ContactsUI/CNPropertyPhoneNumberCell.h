@class UIImageView;

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *emergencyImageView;
@property (nonatomic, getter=isEmergencyPhoneNumber) BOOL emergencyPhoneNumber;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setProperty:(id)a0;
- (BOOL)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)buildEmergencyImageView;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPerformDefaultAction;
- (void)updateTransportButtons;

@end
