@class NSString, NSMutableArray;

@interface HAECGExporter : NSObject <SRMultiSampleExporting> {
    struct unique_ptr<CinnAlgs::CnAlgs, std::default_delete<CinnAlgs::CnAlgs>> { struct __compressed_pair<CinnAlgs::CnAlgs *, std::default_delete<CinnAlgs::CnAlgs>> { struct CnAlgs *__value_; } __ptr_; } _cinAlgs;
    NSMutableArray *_currentLiveWaveform;
}

@property (readonly, nonatomic) BOOL fromRightWrist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetFilter;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dumpCurrentWaveform;
- (void)sr_beginMultiSampleStream;
- (id)sr_endMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)a0;
- (void)handleRealtimeSamples:(const float *)a0 count:(unsigned int)a1 startTimestamp:(unsigned long long)a2;

@end
