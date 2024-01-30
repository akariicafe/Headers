@class PKFamilyMember, NSError, NSMutableArray, NSDate;

@interface PKAppleCashSharingRecipientCapabilitiesFetchStatus : NSObject

@property (copy, nonatomic) NSMutableArray *fetchedCapabilities;
@property (nonatomic) long long maximumPossibleDevices;
@property (nonatomic) BOOL fetchInProgress;
@property (copy, nonatomic) NSError *fetchError;
@property (readonly, copy, nonatomic) NSDate *fetchStartDate;
@property (readonly, nonatomic) PKFamilyMember *familyMember;

- (void).cxx_destruct;
- (id)description;
- (long long)secondsPassedSinceFetchStart;
- (BOOL)allPossibleCapabilitiesFetched;
- (void)addAppleCashSharingRecipientCapabilities:(id)a0;
- (id)initWithFamilyMember:(id)a0 fetchStartDate:(id)a1;

@end
