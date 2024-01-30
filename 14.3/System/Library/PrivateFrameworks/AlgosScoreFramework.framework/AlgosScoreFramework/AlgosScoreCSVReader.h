@class NSArray, NSDictionary, NSError;

@interface AlgosScoreCSVReader : NSObject

@property (retain, nonatomic) NSArray *rows;
@property (retain, nonatomic) NSDictionary *headings;
@property (retain, nonatomic) NSError *error;

+ (id)csvReader:(id)a0 header:(BOOL)a1;

- (void).cxx_destruct;
- (void)debugPrint:(int)a0;
- (id)atRow:(id)a0 col:(id)a1;
- (double)doubleAtRow:(id)a0 col:(id)a1 defaultValue:(double)a2;
- (long long)intAtRow:(id)a0 col:(id)a1 defaultValue:(long long)a2;
- (id)initWithFileName:(id)a0 header:(BOOL)a1;
- (id)stripAndQuoteString:(id)a0;
- (id)fixStrings:(id)a0;
- (id)parseFile:(id)a0 header:(BOOL)a1;
- (void)sortOnColumnIndex:(long long)a0 ascending:(BOOL)a1;
- (id)atRowIndex:(long long)a0 col:(id)a1;
- (double)doubleAtRow:(id)a0 colIndex:(long long)a1 defaultValue:(double)a2;
- (long long)intAtRow:(id)a0 colIndex:(long long)a1 defaultValue:(long long)a2;
- (void)sortOnColumn:(id)a0 ascending:(BOOL)a1;

@end
