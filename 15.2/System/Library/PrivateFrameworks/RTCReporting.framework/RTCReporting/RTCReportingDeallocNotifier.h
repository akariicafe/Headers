@protocol RTCReportingDeallocNotifierDelegate;

@interface RTCReportingDeallocNotifier : NSObject {
    id<RTCReportingDeallocNotifierDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
