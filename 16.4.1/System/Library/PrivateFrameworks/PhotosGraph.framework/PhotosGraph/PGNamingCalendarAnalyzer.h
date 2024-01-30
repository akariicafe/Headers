@class NSString, PGGraphNamingProcessor;

@interface PGNamingCalendarAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (void)findCalendarMatchesFromEventUniversalStartDateTime:(id)a0 eventUniversalEndDateTime:(id)a1 personAttendees:(id)a2 graph:(id)a3 momentNodes:(id)a4;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
