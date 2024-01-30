@class NSSet, NSString, NSMutableDictionary, NSNumber, STCommunicationLimits;

@interface STContentPrivacyViewModel : NSObject

@property BOOL userIsManaged;
@property BOOL userIsRemote;
@property unsigned long long userType;
@property (copy, nonatomic) NSSet *visibleRestrictions;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL isLocalDevice;
@property (nonatomic) BOOL restrictionsEnabled;
@property (nonatomic) BOOL shouldAllowEditing;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSNumber *userDSID;
@property (retain, nonatomic) NSMutableDictionary *valuesByRestriction;
@property (retain) STCommunicationLimits *communicationLimits;

- (void).cxx_destruct;
- (id)init;
- (id)defaultValueForRestriction:(id)a0;
- (id)visibleRestrictionWithConfiguration:(id)a0 key:(id)a1;
- (BOOL)shouldEnableRestriction:(id)a0;

@end
