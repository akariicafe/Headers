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

- (id).cxx_construct;
- (void)resetFilter;
- (void).cxx_destruct;
- (void)sr_beginMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)a0;
- (id)sr_endMultiSampleStream;
- (id)dumpCurrentWaveform;
- (void)handleRealtimeSamples:(const float *)a0 count:(unsigned int)a1 startTimestamp:(unsigned long long)a2;

@end
