@class NSData, NSString, _TtC10FinanceKit13StorableColor;

@interface FinanceKit.ManagedOrderImage : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *localizationName;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic, retain) _TtC10FinanceKit13StorableColor *storedBackgroundColor;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
