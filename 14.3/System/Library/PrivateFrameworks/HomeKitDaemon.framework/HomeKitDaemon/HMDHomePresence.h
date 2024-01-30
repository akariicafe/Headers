@class NSArray, NSDictionary, HMDHome, NSString, HMDDevice;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>

@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly, nonatomic) NSArray *authorizedUsers;
@property (readonly, nonatomic) HMDDevice *lastUpdateByDevice;
@property (readonly, nonatomic) BOOL hasPresenceRegionForAllUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (id)serializedIdentifierDictionary;
- (id)initWithHome:(id)a0 userPresenceMap:(id)a1 lastUpdateByDevice:(id)a2;
- (id)serializedUUIDDictionary;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)areUsersNotAtHome:(id)a0;
- (BOOL)isPresenceRegionKnownForUser:(id)a0;

@end
