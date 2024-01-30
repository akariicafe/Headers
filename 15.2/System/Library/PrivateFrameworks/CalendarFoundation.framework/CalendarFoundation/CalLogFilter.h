@class NSArray, NSSet;

@interface CalLogFilter : NSObject

@property (retain, nonatomic) NSArray *includesAsRegexes;
@property (retain, nonatomic) NSArray *excludesAsRegexes;
@property (nonatomic) int minimumLevel;
@property (copy, nonatomic) NSArray *includes;
@property (copy, nonatomic) NSArray *excludes;
@property (copy, nonatomic) NSSet *includesRegardlessOfLevel;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)proceedProcessingLogName:(id)a0;
- (id)generateRegexesForPatterns:(id)a0;

@end
