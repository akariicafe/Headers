@class NSMutableArray, NSString, NSArray, DTKPSession, DTKTraceTapConfig, DTTapLocal, NSMutableData;

@interface DTKTraceTapLocalDelegate : NSObject <DTTapLocalDelegate> {
    DTTapLocal *_tap;
    DTKTraceTapConfig *_config;
    BOOL _removeArchivingURLWhenComplete;
    NSMutableData *_triggerIDs;
    NSMutableArray *_actionIDsByTriggerIndex;
    DTKPSession *_session;
    BOOL _stopWasCalled;
    NSArray *_localEventProducers;
    BOOL _usesRawKtraceFile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)stop;
- (id)initWithConfig:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)setTap:(id)a0;
- (unsigned long long)_triggerCount;
- (void)unpause;
- (id)validateConfig;
- (unsigned long long)_clampBufferSize:(unsigned long long)a0;
- (id)_getSessionMetadata;
- (void)_sendStackshot;
- (unsigned long long)bufferSizeForConfiguration:(id)a0;
- (BOOL)canFetchWhileArchiving;
- (void)fetchDataForReason:(unsigned long long)a0 block:(id /* block */)a1;

@end
