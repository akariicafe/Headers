@class NSString;

@interface ManagedAssetResumableLoad : NSManagedObject

@property (nonatomic) long long downloadToken;
@property (nonatomic, copy) NSString *localURL;
@property (nonatomic, copy) NSString *remoteURL;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
