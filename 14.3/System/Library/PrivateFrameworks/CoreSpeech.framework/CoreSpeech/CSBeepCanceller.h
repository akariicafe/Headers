@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, CSBeepCancellerDelegate;

@interface CSBeepCanceller : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> > { struct __compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> > { struct BatchBeepCanceller *__value_; } __ptr_; } _beepCanceller;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _beepFloatVec;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _floatBuffer;
    struct vector<short, std::__1::allocator<short> > { short *__begin_; short *__end_; struct __compressed_pair<short *, std::__1::allocator<short> > { short *__value_; } __end_cap_; } _shortBuffer;
    unsigned long long _numTotalInputSamples;
    unsigned long long _numTotalOutputSamples;
}

@property (weak, nonatomic) id<CSBeepCancellerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *metrics;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)flush;
- (id).cxx_construct;
- (void)willBeep;
- (void)cancelBeepFromSamples:(id)a0 timestamp:(unsigned long long)a1;

@end
