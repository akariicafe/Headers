@class NSString, ResourceArbiterClient;

@interface FlickerResourceArbiterClientDelegate : NSObject <ResourceArbiterClientDelegate>

@property (readonly, nonatomic) ResourceArbiterClient *arbiterClient;
@property (nonatomic) struct H13ISPFlickerDetectorContext { struct H13ISPFlickerDetectorHWInfoStruct *x0; BOOL x1; struct OpaqueAudioComponentInstance *x2; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x3; unsigned int x4; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x5; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x6; unsigned long long x7; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x8; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x9; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x10; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x11; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x12; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x13; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x14; struct CPastFlickerHistory *x15; int x16; struct OpaqueFFTSetup *x17; struct H13ISPFlickerDetectorDebugContext { struct __sFILE *x0; struct __sFILE *x1; struct __sFILE *x2; struct __sFILE *x3; struct __sFILE *x4; struct H13ISPMetrics *x5; struct photometer_flicker_result *x6; } x18; float x19; void /* function */ *x20; void *x21; BOOL x22; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x23; id x24; float x25; struct *x26; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x27; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x28; struct ApplePhotonDetectorServicesAssistant *x29; unsigned char x30[112]; } *flickerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (id)init;
- (void)releaseResourceAccess;
- (void)resourceAccessResult:(BOOL)a0;
- (void)resourceAccessRevoked;
- (void)requestResourceAccess;

@end
