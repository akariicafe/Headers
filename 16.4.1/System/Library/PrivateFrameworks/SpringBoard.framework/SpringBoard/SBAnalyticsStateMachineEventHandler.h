@class NSString, NSMutableArray;

@interface SBAnalyticsStateMachineEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {
    NSMutableArray *_edges;
}

@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
