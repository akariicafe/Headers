@class NSString, NSDate;

@interface ManagedAssetBundle : NSManagedObject

@property (nonatomic, copy) NSDate *dateRequested;
@property (nonatomic, copy) NSString *downloadingDeviceIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int loadStatus;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSString *requestingDeviceIdentifier;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
