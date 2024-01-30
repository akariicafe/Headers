@class NSString, DVTFileStream, DTKTraceSessionCreator;
@protocol DTKPConfiguration;

@interface DTKPKTraceFileAggregator : NSObject <DTKPKtraceAggregator> {
    id<DTKPConfiguration> _config;
    BOOL _kperfSample;
    DVTFileStream *_fileStream;
    int _ktraceFD;
    DTKTraceSessionCreator *_ktraceSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pause;
- (id)stop;
- (id)initWithConfig:(id)a0;
- (id)start;
- (void).cxx_destruct;
- (id)resume;
- (int)startKtraceSession:(char *)a0 useExisting:(BOOL)a1 outputFD:(int *)a2;
- (int)stopKtraceSession;
- (id)swapOutCurrentDatastream:(id *)a0;

@end
