@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {
    NSDate *_boundaryDate;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)_start;
- (void)_cancel;
- (void).cxx_destruct;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)a0;
- (void)setExtendsRightFromDate:(id)a0;

@end
