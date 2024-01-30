@class NSString;

@interface SiriAnalyticsError : NSError

@property (readonly, nonatomic) unsigned long long errorType;
@property (readonly, nonatomic) NSString *message;

- (id)init;
- (void).cxx_destruct;
- (id)initWithErrorType:(unsigned long long)a0 message:(id)a1;

@end
