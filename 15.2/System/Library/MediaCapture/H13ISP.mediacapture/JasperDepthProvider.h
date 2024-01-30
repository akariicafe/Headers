@class NSString;

@interface JasperDepthProvider : NSObject <JDDepthProcessorDelegate> {
    BOOL _wakupDone;
    struct H13ISPDevice { void /* function */ *x0; void *x1; struct H13ISPDeviceController *x2; struct __CFDictionary *x3; struct H13ISPMotionManager *x4; struct H13ISPServicesRemote *x5; struct H13ISPFirmwareWorkProcessor *x6; unsigned int x7; struct H13ISPPlatformInfoStruct *x8; int x9; void *x10; struct __CFRunLoopSource *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x15; BOOL x16; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x17[6]; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x18[6]; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x19; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x20; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x21; unsigned int x22; struct H13ISPDeviceCachedConfigs { unsigned int x0; BOOL x1; struct sCIspCmdConfigGet { unsigned int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x2; struct H13ISPDeviceCachedConfigChannel *x3; } x23; unsigned int x24; } *_pDevice;
    struct H13ISPServicesRemote { id x0; id x1; id x2; void /* function */ *x3; void *x4; char *x5; } *_pRemote;
    unsigned int _channel;
    float _minFrameRate;
    float _maxFrameRate;
    BOOL _frameRateChanged;
}

@property int gmoFlowBitmask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (void)replaceBank:(int)a0 frameConfig:(id)a1;
- (void)updateCurrentSequenceAnchors:(const struct JDJasperAnchors { struct JDBankAnchors { unsigned char x0[144]; unsigned char x1[144]; unsigned long long x2; } x0[4]; } *)a0;
- (void)wakeupHasCompleted:(int)a0;
- (int)getSeqId;
- (int)startOffsetSequence:(int)a0 offsets:(const struct JDBankOffset { unsigned short x0; char x1; char x2; } *)a1 repeat:(int)a2 newSequence:(BOOL)a3;
- (void)updateJasperCalib:(const void *)a0;
- (void)updateJasperCalibSpots:(const struct JasperCalibSpotLocations { struct { struct { float x0; float x1; } x0[144]; } x0[4]; float x1; unsigned int x2; } *)a0;
- (id)initWithDevice:(struct H13ISPDevice { void /* function */ *x0; void *x1; struct H13ISPDeviceController *x2; struct __CFDictionary *x3; struct H13ISPMotionManager *x4; struct H13ISPServicesRemote *x5; struct H13ISPFirmwareWorkProcessor *x6; unsigned int x7; struct H13ISPPlatformInfoStruct *x8; int x9; void *x10; struct __CFRunLoopSource *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x15; BOOL x16; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x17[6]; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x18[6]; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x19; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x20; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x21; unsigned int x22; struct H13ISPDeviceCachedConfigs { unsigned int x0; BOOL x1; struct sCIspCmdConfigGet { unsigned int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x2; struct H13ISPDeviceCachedConfigChannel *x3; } x23; unsigned int x24; } *)a0 andChannel:(unsigned int)a1 andRemote:(struct H13ISPServicesRemote { id x0; id x1; id x2; void /* function */ *x3; void *x4; char *x5; } *)a2;
- (void)setJasperFrameRateMin:(float)a0;
- (void)setJasperFrameRateMax:(float)a0;
- (BOOL)isSameDevice:(struct H13ISPDevice { void /* function */ *x0; void *x1; struct H13ISPDeviceController *x2; struct __CFDictionary *x3; struct H13ISPMotionManager *x4; struct H13ISPServicesRemote *x5; struct H13ISPFirmwareWorkProcessor *x6; unsigned int x7; struct H13ISPPlatformInfoStruct *x8; int x9; void *x10; struct __CFRunLoopSource *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x15; BOOL x16; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x17[6]; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x18[6]; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x19; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x20; struct H13ISPNotification { char *x0; BOOL x1; int x2; } x21; unsigned int x22; struct H13ISPDeviceCachedConfigs { unsigned int x0; BOOL x1; struct sCIspCmdConfigGet { unsigned int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x2; struct H13ISPDeviceCachedConfigChannel *x3; } x23; unsigned int x24; } *)a0;

@end
