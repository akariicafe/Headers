@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {
    NSDate *_boundaryDate;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)_start;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)a0;
- (void)setExtendsRightFromDate:(id)a0;

@end
