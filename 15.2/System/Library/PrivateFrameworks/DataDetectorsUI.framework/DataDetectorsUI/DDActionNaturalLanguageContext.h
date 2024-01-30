@class NSString, NSArray;

@interface DDActionNaturalLanguageContext : NSObject

@property (retain) NSString *leadingText;
@property (retain) NSString *trailingText;
@property (retain) struct __DDResult { } *result;
@property (retain) NSArray *associatedResults;

- (void).cxx_destruct;
- (void)dealloc;

@end
