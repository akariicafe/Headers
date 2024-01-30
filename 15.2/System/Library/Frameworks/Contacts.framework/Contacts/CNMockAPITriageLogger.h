@class NSString;

@interface CNMockAPITriageLogger : NSObject <CNAPITriageLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 spentTimeInClientCode:(double)a1;
- (void)didExecuteFetchRequest:(id)a0 duration:(double)a1;
- (void)request:(id)a0 encounteredError:(id)a1;
- (void)willExecuteFetchRequest:(id)a0;
- (void)didReturnAllResultsForContactFetchRequest:(id)a0;
- (void)request:(id)a0 willReturnAnchor:(id)a1;
- (void)clientStoppedEnumerationForRequest:(id)a0;
- (void)request:(id)a0 containsContact:(id)a1;

@end
