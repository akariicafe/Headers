@class NSString, NSArray;

@interface STMutableTelephonyCarrierBundleInfo : STTelephonyCarrierBundleInfo

@property (nonatomic) BOOL LTEConnectionShows4G;
@property (nonatomic, getter=isReinitiatingActivationDisabled) BOOL reinitiatingActivationDisabled;
@property (copy, nonatomic) NSString *customerServicePhoneNumber;
@property (copy, nonatomic) NSArray *disabledApplicationIDs;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *homeCountryCode;

- (void)setCustomerServicePhoneNumber:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setReinitiatingActivationDisabled:(BOOL)a0;
- (void)setCarrierName:(id)a0;
- (void)setLTEConnectionShows4G:(BOOL)a0;
- (void)setDisabledApplicationIDs:(id)a0;
- (void)setHomeCountryCode:(id)a0;

@end
