@class NSError, NSDate;

@interface WFOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (copy, nonatomic) NSError *error;

- (void)finish;
- (BOOL)isReady;
- (BOOL)isFinished;
- (void)start;
- (id)description;
- (void).cxx_destruct;

@end
