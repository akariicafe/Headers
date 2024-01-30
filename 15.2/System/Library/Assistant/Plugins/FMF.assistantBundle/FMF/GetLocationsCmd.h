@class NSArray, NSString, CLLocation, NSNumber;

@interface GetLocationsCmd : FMFBaseCmd

@property (copy, nonatomic) NSArray *emails;
@property (copy, nonatomic) CLLocation *currentLocation;
@property (copy, nonatomic) CLLocation *requestedLocation;
@property (copy, nonatomic) NSString *requestedLocationLabel;
@property (copy, nonatomic) NSArray *friends;
@property (copy, nonatomic) NSString *proximity;
@property (copy, nonatomic) NSNumber *atRequestedLocation;
@property (copy, nonatomic) NSString *clientId;

- (id)jsonBodyDictionary;
- (id)headers;
- (id)currentLocationDictionary;
- (id)allFriendsHandles;
- (id)requestedLocationDictionary;
- (void).cxx_destruct;
- (id)path;
- (id)result;
- (id)friendForHandle:(id)a0;

@end
