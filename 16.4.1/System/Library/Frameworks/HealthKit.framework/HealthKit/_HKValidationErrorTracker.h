@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject

@property (nonatomic) long long errorCount;
@property (retain, nonatomic) NSMutableString *errorMessage;

- (id)init;
- (void).cxx_destruct;

@end
