@class NSString, NSDate, NSNumber, TDMetafontSelector;

@interface TDFontDefinition : NSManagedObject

@property (retain, nonatomic) NSNumber *baselineOffset;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSString *postscriptName;
@property (retain, nonatomic) TDMetafontSelector *selector;

@end
