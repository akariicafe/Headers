@protocol RTCReportingDeallocNotifierDelegate;

@interface RTCReportingDeallocNotifier : NSObject {
    id<RTCReportingDeallocNotifierDelegate> _delegate;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;

@end
