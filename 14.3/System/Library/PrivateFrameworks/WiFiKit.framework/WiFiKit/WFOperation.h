@class NSError, NSDate;

@interface WFOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (copy, nonatomic) NSError *error;

- (BOOL)isReady;
- (void)finish;
- (void).cxx_destruct;
- (BOOL)isFinished;
- (id)description;
- (void)start;

@end
