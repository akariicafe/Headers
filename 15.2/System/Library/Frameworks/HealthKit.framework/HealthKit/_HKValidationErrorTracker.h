@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject

@property (nonatomic) long long errorCount;
@property (retain, nonatomic) NSMutableString *errorMessage;

- (void).cxx_destruct;
- (id)init;

@end
