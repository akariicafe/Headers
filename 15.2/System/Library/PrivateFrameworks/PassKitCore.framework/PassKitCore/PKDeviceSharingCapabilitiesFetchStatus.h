@class NSString, NSArray, NSDate, NSError, NSMutableArray;

@interface PKDeviceSharingCapabilitiesFetchStatus : NSObject {
    NSMutableArray *_fetchedCapabilities;
}

@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSArray *fetchedCapabilities;
@property (nonatomic) long long maximumPossibleDevices;
@property (readonly, copy, nonatomic) NSDate *fetchStartDate;
@property (copy, nonatomic) NSError *fetchError;
@property (nonatomic) BOOL deviceCountFetchInProgress;

- (id)initWithAppleID:(id)a0 fetchStartDate:(id)a1;
- (BOOL)hasDeviceVersionWithOSVersionRequirementRange:(id)a0;
- (void)addDeviceSharingCapabilities:(id)a0;
- (BOOL)allPossibleCapabilitiesFetched;
- (long long)secondsPassedSinceFetchStart;
- (id)description;
- (void).cxx_destruct;

@end
