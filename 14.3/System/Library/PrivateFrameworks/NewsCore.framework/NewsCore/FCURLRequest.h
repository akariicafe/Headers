@class NSURLRequest, NSString, NSDate;

@interface FCURLRequest : NSObject

@property (readonly, copy, nonatomic) NSURLRequest *URLRequest;
@property (readonly, nonatomic) long long destination;
@property (nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSDate *dateInitiated;
@property (readonly, copy, nonatomic) NSString *loggingKey;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long remainingRetries;

+ (id /* block */)comparator;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithURLRequest:(id)a0 destination:(long long)a1 priority:(long long)a2 dateInitiated:(id)a3 loggingKey:(id)a4 completion:(id /* block */)a5;

@end
