@class _DPStringRecorder, _PASRng;

@interface SGDPStringRecorder : NSObject {
    _DPStringRecorder *_recorder;
    _PASRng *_rng;
}

- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)recordString:(id)a0;

@end
