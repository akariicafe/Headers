@class NSArray, NSDictionary, CRKASMRosterProviderConfiguration, NSSet;
@protocol CRKClassKitCurrentUser;

@interface CRKASMWorldBuildOperation : CATOperation

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;
@property (retain, nonatomic) id<CRKClassKitCurrentUser> classKitCurrentUser;
@property (retain, nonatomic) NSArray *classKitClasses;
@property (copy, nonatomic) NSDictionary *classKitLocationsByLocationID;
@property (copy, nonatomic) NSSet *manageableLocationIDs;
@property (copy, nonatomic) NSDictionary *classKitPersonsByClassID;
@property (copy, nonatomic) NSDictionary *trustedClassKitPersonsByClassID;

+ (id)makeErrorWithErrorsByObjectID:(id)a0;

- (void)finish;
- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isAsynchronous;
- (void)checkAccountEligibility;
- (void)housekeepKeychain;
- (void)finishWithEmptyResultObject;
- (void)buildCurrentClassKitUser;
- (void)buildClassKitClasses;
- (void)buildClassKitLocationsByLocationID;
- (void)buildManageableLocationIDs;
- (void)buildAllClassKitPersonsByClassID;
- (id)compileResult;
- (void)housekeepKeychainWithRoster:(id)a0;
- (id)makeHousekeeperWithRoster:(id)a0;

@end
