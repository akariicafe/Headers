@class _TtC10FinanceKit15LocalizedString, NSString;

@interface FinanceKit.ManagedOrderBarcode : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *altText;
@property (nonatomic) short formatValue;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageEncoding;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
