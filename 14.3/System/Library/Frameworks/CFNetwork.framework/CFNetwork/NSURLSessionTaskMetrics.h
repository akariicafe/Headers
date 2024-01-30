@class NSArray, __CFN_TaskMetrics, NSDateInterval;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding> {
    __CFN_TaskMetrics *__metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *transactionMetrics;
@property (readonly, copy) NSDateInterval *taskInterval;
@property (readonly) unsigned long long redirectCount;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
