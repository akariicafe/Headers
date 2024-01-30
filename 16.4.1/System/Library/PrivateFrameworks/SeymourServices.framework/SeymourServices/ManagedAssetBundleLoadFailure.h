@class NSString, NSDate;

@interface ManagedAssetBundleLoadFailure : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *reason;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
