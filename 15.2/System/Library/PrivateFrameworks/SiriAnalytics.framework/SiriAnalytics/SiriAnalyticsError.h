@class NSString;

@interface SiriAnalyticsError : NSError

@property (readonly, nonatomic) unsigned long long errorType;
@property (readonly, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)init;
- (id)initWithErrorType:(unsigned long long)a0 message:(id)a1;

@end
