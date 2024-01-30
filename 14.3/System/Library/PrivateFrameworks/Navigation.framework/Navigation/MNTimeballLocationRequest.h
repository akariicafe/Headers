@class NSDate;

@interface MNTimeballLocationRequest : NSObject

@property (nonatomic) double desiredAccuracy;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) unsigned long long maxAttempts;
@property (retain, nonatomic) NSDate *requestDate;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)requestWithAccuracy:(double)a0 maxAttempts:(unsigned long long)a1 timeoutInterval:(double)a2 completionBlock:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;

@end
