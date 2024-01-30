@class NSDate;

@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation {
    NSDate *_endDate;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)_start;
- (void)_cancel;
- (void).cxx_destruct;
- (void)_getEndDate;
- (void)_invokeHandler;

@end
