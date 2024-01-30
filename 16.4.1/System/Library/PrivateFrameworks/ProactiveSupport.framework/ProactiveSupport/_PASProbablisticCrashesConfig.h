@interface _PASProbablisticCrashesConfig : NSObject

@property (nonatomic) unsigned int oddsNumerator;
@property (nonatomic) unsigned int oddsDenominator;
@property (nonatomic) unsigned char uniqueCallsiteWindowSize;

- (id)init;

@end
