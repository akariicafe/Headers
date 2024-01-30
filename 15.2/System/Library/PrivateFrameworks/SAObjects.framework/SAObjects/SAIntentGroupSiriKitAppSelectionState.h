@class NSString, NSArray, SASyncAppIdentifyingInfo;

@interface SAIntentGroupSiriKitAppSelectionState : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appConfirmationState;
@property (copy, nonatomic) NSString *appCorrectionState;
@property (copy, nonatomic) NSArray *eligibleApps;
@property (retain, nonatomic) SASyncAppIdentifyingInfo *requestedApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)siriKitAppSelectionState;
+ (id)siriKitAppSelectionStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
