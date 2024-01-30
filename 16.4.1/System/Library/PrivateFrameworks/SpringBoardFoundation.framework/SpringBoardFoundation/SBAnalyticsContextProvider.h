@class SBSAnalyticsState, NSString, SBFAnalyticsBackend;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding> {
    SBSAnalyticsState *_eventPayload;
    SBFAnalyticsBackend *_backend;
}

@property (readonly, nonatomic) SBSAnalyticsState *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
