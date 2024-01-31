@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (readonly, nonatomic) NSUUID *advertisingIdentifier;
@property (readonly, nonatomic, getter=isAdvertisingTrackingEnabled) BOOL advertisingTrackingEnabled;

+ (id)sharedManager;

- (void)clearAdvertisingIdentifier;
- (BOOL)isUserOptedIn;

@end
