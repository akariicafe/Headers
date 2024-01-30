@class NSData;

@interface FinanceKit.ManagedOrderData : NSManagedObject

@property (nonatomic, copy) NSData *data;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
