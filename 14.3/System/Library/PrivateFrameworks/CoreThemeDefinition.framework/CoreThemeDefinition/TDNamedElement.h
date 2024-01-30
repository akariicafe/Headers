@class TDElementProduction, NSString, NSDate, NSNumber;

@interface TDNamedElement : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) TDElementProduction *production;

@end
