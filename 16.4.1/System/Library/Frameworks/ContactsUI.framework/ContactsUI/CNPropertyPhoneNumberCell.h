@class UIImageView;

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *emergencyImageView;
@property (nonatomic, getter=isEmergencyPhoneNumber) BOOL emergencyPhoneNumber;

- (void)setProperty:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (void)buildEmergencyImageView;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)updateTransportButtons;

@end
