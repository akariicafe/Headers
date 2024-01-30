@class NSString, RTTTelephonyUtilities;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities>

@property (retain, nonatomic) RTTTelephonyUtilities *utilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)relayIsSupported;
- (BOOL)contactIsTTYContact:(id)a0;
- (id)initWithUtilityProvider:(id)a0;
- (id)nts_lazyUtilityProvider;

@end
