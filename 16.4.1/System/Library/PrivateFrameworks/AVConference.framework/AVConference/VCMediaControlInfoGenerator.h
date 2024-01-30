@class NSString, NSMutableArray;

@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate> {
    struct __CFDictionary { } *_callbacksDict;
    NSMutableArray *_controlInfoPool;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _controlInfoPoolLock;
    unsigned int _optionBitmap;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _callbackDictLock;
}

@property (readonly) unsigned int type;
@property (readonly) unsigned char version;
@property unsigned char fecFeedbackVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)deregisterCallbacksWithContext:(void *)a0;
- (int)addMediaControlInfoOption:(unsigned int)a0;
- (void)disposeControlInfo:(id)a0;
- (unsigned long long)feedbackSize;
- (id)initWithType:(unsigned int)a0 version:(unsigned char)a1;
- (void *)newControlInfo;
- (id)newControlInfoFromPool;
- (void *)newControlInfoWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2;
- (void *)newMediaControlInfo;
- (void *)newMediaControlInfoWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2;
- (void)passMediaControlInfo:(id)a0 isFillBlobCallback:(BOOL)a1;
- (int)registerFillBlobCallback:(void /* function */ *)a0 processBlobCallback:(void /* function */ *)a1 context:(void *)a2;

@end
