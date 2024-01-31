@class UIImageView;

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *emergencyImageView;
@property (nonatomic, getter=isEmergencyPhoneNumber) BOOL emergencyPhoneNumber;

- (void)copy:(id)a0;
- (void)setProperty:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)buildEmergencyImageView;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)updateTransportButtons;

@end
