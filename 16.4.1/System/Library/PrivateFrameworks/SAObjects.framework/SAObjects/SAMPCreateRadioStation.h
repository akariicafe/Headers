@class NSString, NSArray, NSURL, NSNumber;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSURL *stationUrl;

+ (id)createRadioStation;
+ (id)createRadioStationWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
