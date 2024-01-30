@class AUAudioUnit;

@interface AUAudioUnitOfflineProcessor : NSObject {
    struct CAExtAudioFile { void /* function */ **_vptr$CAExtAudioFile; struct OpaqueExtAudioFile *mExtAudioFile; } _srcFile;
    struct CAExtAudioFile { void /* function */ **_vptr$CAExtAudioFile; struct OpaqueExtAudioFile *mExtAudioFile; } _destFile;
    AUAudioUnit *_audioUnit;
    id /* block */ _renderBlock;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList> > { struct __compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > { struct CABufferList *__value_; } __ptr_; } _srcBufferList;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList> > { struct __compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > { struct CABufferList *__value_; } __ptr_; } _destBufferList;
    id /* block */ _pullInputBlock;
}

@property (readonly, nonatomic) long long assetLength;

- (BOOL)run;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAudioUnit:(id)a0 inputFileURL:(id)a1 outputFileURL:(id)a2 ioSampleRate:(long long)a3;

@end
