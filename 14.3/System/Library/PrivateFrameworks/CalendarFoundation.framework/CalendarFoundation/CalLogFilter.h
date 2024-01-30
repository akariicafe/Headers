@class NSArray, NSSet;

@interface CalLogFilter : NSObject

@property (retain, nonatomic) NSArray *includesAsRegexes;
@property (retain, nonatomic) NSArray *excludesAsRegexes;
@property (nonatomic) int minimumLevel;
@property (copy, nonatomic) NSArray *includes;
@property (copy, nonatomic) NSArray *excludes;
@property (copy, nonatomic) NSSet *includesRegardlessOfLevel;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)proceedProcessingLogName:(id)a0;
- (id)generateRegexesForPatterns:(id)a0;

@end
