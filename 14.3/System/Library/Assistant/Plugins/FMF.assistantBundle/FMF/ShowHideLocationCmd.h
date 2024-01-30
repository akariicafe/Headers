@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd

@property (nonatomic) BOOL hideLocation;
@property (copy, nonatomic) CLLocation *currentLocation;

- (id)result;
- (id)path;
- (void).cxx_destruct;
- (id)jsonBodyDictionary;
- (id)currentLocationDictionary;

@end
