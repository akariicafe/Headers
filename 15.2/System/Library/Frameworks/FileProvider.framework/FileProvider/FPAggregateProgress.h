@class NSMutableArray;

@interface FPAggregateProgress : NSProgress {
    NSMutableArray *_childProgresses;
}

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)startReportingProgress;

@end
