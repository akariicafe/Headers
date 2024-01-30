@class NSString;

@interface NUAssertionInfo : NSObject

@property SEL selector;
@property (retain) Class objectClass;
@property BOOL isClassMethod;
@property (retain) NSString *functionName;
@property (retain) NSString *fileName;
@property unsigned long long lineNumber;
@property (retain) NSString *message;
@property BOOL isFatal;

- (void).cxx_destruct;
- (id)prettyMethodName;
- (id)description;
- (BOOL)isWarning;

@end
