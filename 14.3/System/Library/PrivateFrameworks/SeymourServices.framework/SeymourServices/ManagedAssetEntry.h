@class NSString;

@interface ManagedAssetEntry : NSManagedObject

@property (nonatomic) int loadStatus;
@property (nonatomic, copy) NSString *localURL;
@property (nonatomic, copy) NSString *remoteURL;
@property (nonatomic) long long size;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
