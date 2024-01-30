@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd

@property (nonatomic) BOOL hideLocation;
@property (copy, nonatomic) CLLocation *currentLocation;

- (id)jsonBodyDictionary;
- (id)currentLocationDictionary;
- (void).cxx_destruct;
- (id)path;
- (id)result;

@end
