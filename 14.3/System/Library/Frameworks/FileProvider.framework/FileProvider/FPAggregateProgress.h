@class NSMutableArray;

@interface FPAggregateProgress : NSProgress {
    NSMutableArray *_childProgresses;
}

- (void)cancel;
- (void)startReportingProgress;
- (void)addChild:(id)a0;
- (void).cxx_destruct;

@end
