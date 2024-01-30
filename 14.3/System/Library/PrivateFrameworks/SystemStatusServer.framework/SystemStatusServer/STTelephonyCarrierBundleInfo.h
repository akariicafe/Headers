@class NSString, NSArray;

@interface STTelephonyCarrierBundleInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (readonly, nonatomic) BOOL LTEConnectionShows4G;
@property (readonly, nonatomic, getter=isReinitiatingActivationDisabled) BOOL reinitiatingActivationDisabled;
@property (readonly, copy, nonatomic) NSString *customerServicePhoneNumber;
@property (readonly, copy, nonatomic) NSArray *disabledApplicationIDs;
@property (readonly, copy, nonatomic) NSString *carrierName;
@property (readonly, copy, nonatomic) NSString *homeCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCarrierBundleInfo:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
