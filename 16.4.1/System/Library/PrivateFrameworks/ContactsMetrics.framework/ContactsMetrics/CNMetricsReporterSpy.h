@class NSArray, NSString, NSMutableArray;

@interface CNMetricsReporterSpy : NSObject <CNMetricsReporter> {
    NSMutableArray *_entries;
}

@property (readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearEvents;
- (id)init;
- (void).cxx_destruct;
- (void)sendDictionary:(id)a0 forEvent:(id)a1 andLog:(BOOL)a2;
- (void)logSimpleEvent:(id)a0 forApplication:(id)a1 andLog:(BOOL)a2;

@end
