@class NSString, NSDate;

@interface ManagedAssetLoadFailure : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *remoteURL;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
