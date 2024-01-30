@class NSArray, NSRegularExpression;

@interface HKMedicationsTextNDCParser : NSObject

@property (retain, nonatomic) NSArray *NDC10RegularExpressions;
@property (retain, nonatomic) NSRegularExpression *NDC11RegularExpression;

- (id)init;
- (void).cxx_destruct;
- (id)parsedNDCCodeFromString:(id)a0;

@end
