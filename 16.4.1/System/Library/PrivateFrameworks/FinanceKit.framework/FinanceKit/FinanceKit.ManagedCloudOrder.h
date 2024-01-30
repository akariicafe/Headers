@class NSString, NSUUID, NSData, NSDate;

@interface FinanceKit.ManagedCloudOrder : NSManagedObject

@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSData *orderData;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSDate *updatedDate;
@property (nonatomic) BOOL isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic) short schemaVersion;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
