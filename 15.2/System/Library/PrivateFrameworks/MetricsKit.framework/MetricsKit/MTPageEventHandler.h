@class NSMutableArray;
@protocol MTPageEventHandlerDelegate;

@interface MTPageEventHandler : MTStandardEventHandler

@property (retain, nonatomic) NSMutableArray *trackedPageHistory;
@property (weak, nonatomic) id<MTPageEventHandlerDelegate> delegate;

- (id)knownFields;
- (void).cxx_destruct;
- (id)eventType;
- (id)eventVersion:(id)a0;
- (id)pageHistory:(id)a0;
- (void)updatePageHistoryWithPage:(id)a0;
- (void)didCreateMetricsData:(id)a0;

@end
