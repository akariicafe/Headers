@class NSString;

@interface NUAssertionInfo : NSObject

@property SEL selector;
@property (retain) Class objectClass;
@property BOOL isClassMethod;
@property (retain) NSString *functionName;
@property (retain) NSString *fileName;
@property unsigned long long lineNumber;
@property (retain) NSString *message;
@property (retain) NSString *currentlyExecutingJobName;
@property BOOL isFatal;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isWarning;
- (id)prettyMethodName;

@end
