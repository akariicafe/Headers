@class NSURLRequest, NSString, NSDate;

@interface FCURLRequest : NSObject {
    NSURLRequest *_URLRequest;
    long long _destination;
    long long _priority;
    NSDate *_dateInitiated;
    NSString *_loggingKey;
    id /* block */ _completion;
    long long _remainingRetries;
}

- (id)description;
- (void).cxx_destruct;

@end
