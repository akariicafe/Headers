@class NSNumber, TDMetafontSizeSelector, NSDate;

@interface TDFontSizeDefinition : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *pointSize;
@property (retain, nonatomic) TDMetafontSizeSelector *selector;

@end
