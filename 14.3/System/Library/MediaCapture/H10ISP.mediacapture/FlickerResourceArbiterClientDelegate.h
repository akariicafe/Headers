@class NSString, ResourceArbiterClient;

@interface FlickerResourceArbiterClientDelegate : NSObject <ResourceArbiterClientDelegate>

@property (readonly, nonatomic) ResourceArbiterClient *arbiterClient;
@property (nonatomic) struct H10ISPFlickerDetectorContext { struct H10ISPFlickerDetectorHWInfoStruct *x0; BOOL x1; struct OpaqueAudioComponentInstance *x2; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x3; unsigned int x4; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x5; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x6; unsigned long long x7; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x8; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x9; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x10; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x11; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x12; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x13; struct CPastFlickerHistory *x14; int x15; struct OpaqueFFTSetup *x16; struct H10ISPFlickerDetectorDebugContext { struct __sFILE *x0; struct __sFILE *x1; struct __sFILE *x2; struct __sFILE *x3; struct H10ISPMetrics *x4; struct photometer_flicker_result *x5; } x17; float x18; void /* function */ *x19; void *x20; BOOL x21; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x22; id x23; struct *x24; } *flickerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cleanup;
- (void)releaseResourceAccess;
- (void)resourceAccessResult:(BOOL)a0;
- (void)resourceAccessRevoked;
- (void)requestResourceAccess;

@end
