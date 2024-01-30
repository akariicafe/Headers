@class NSData, NSString;

@interface ManagedKeyCertificate : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *remoteURL;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
