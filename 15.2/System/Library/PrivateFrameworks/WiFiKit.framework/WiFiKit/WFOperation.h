@class NSError, NSDate;

@interface WFOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (copy, nonatomic) NSError *error;

- (void)finish;
- (BOOL)isReady;
- (BOOL)isFinished;
- (id)description;
- (void)start;
- (void).cxx_destruct;

@end
