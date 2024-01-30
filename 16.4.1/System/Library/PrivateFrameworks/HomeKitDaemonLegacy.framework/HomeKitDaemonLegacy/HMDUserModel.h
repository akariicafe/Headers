@class HMUserHomeAccessSettings, NSString, NSDictionary, HMDAccountHandle, NSArray, HMDAccountIdentifier, NSNumber;

@interface HMDUserModel : HMDBackingStoreModelObject

@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSString *changeTag;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSNumber *analysisAccessSelection;
@property (retain, nonatomic) NSNumber *audioAnalysisUserDropInAccessLevel;
@property (retain, nonatomic) NSArray *allowedAccessoryUUIDStrings;
@property (retain, nonatomic) NSArray *allowedAccessoryCategories;
@property (retain, nonatomic) NSArray *allowedRoomUUIDStrings;
@property (readonly, copy, nonatomic) HMUserHomeAccessSettings *homeAccessSettings;

+ (id)properties;

@end
