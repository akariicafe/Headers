@class NSString;

@interface JasperDepthProvider : NSObject <JDDepthProcessorDelegate> {
    BOOL _wakupDone;
    struct H10ISPDevice { void /* function */ *x0; void *x1; struct H10ISPDeviceController *x2; struct __CFDictionary *x3; struct H10ISPMotionManager *x4; struct H10ISPServicesRemote *x5; struct H10ISPFirmwareWorkProcessor *x6; unsigned int x7; struct H10ISPPlatformInfoStruct *x8; int x9; void *x10; struct __CFRunLoopSource *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x15; BOOL x16; char *x17[6]; int x18[6]; unsigned char x19[6]; char *x20[6]; int x21[6]; unsigned char x22[6]; int x23; unsigned char x24; int x25; unsigned char x26; int x27; unsigned char x28; unsigned int x29; struct H10ISPDeviceCachedConfigs { unsigned int x0; BOOL x1; struct sCIspCmdConfigGet { unsigned int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x2; struct H10ISPDeviceCachedConfigChannel *x3; } x30; unsigned int x31; } *_pDevice;
    struct H10ISPServicesRemote { id x0; id x1; id x2; void /* function */ *x3; void *x4; char *x5; } *_pRemote;
    unsigned int _channel;
    unsigned short _minFrameRate;
    unsigned short _maxFrameRate;
    BOOL _frameRateChanged;
}

@property int gmoFlowBitmask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (int)getSeqId;
- (id)initWithDevice:(struct H10ISPDevice { void /* function */ *x0; void *x1; struct H10ISPDeviceController *x2; struct __CFDictionary *x3; struct H10ISPMotionManager *x4; struct H10ISPServicesRemote *x5; struct H10ISPFirmwareWorkProcessor *x6; unsigned int x7; struct H10ISPPlatformInfoStruct *x8; int x9; void *x10; struct __CFRunLoopSource *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x15; BOOL x16; char *x17[6]; int x18[6]; unsigned char x19[6]; char *x20[6]; int x21[6]; unsigned char x22[6]; int x23; unsigned char x24; int x25; unsigned char x26; int x27; unsigned char x28; unsigned int x29; struct H10ISPDeviceCachedConfigs { unsigned int x0; BOOL x1; struct sCIspCmdConfigGet { unsigned int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x2; struct H10ISPDeviceCachedConfigChannel *x3; } x30; unsigned int x31; } *)a0 andChannel:(unsigned int)a1 andRemote:(struct H10ISPServicesRemote { id x0; id x1; id x2; void /* function */ *x3; void *x4; char *x5; } *)a2;
- (BOOL)isSameDevice:(struct H10ISPDevice { void /* function */ *x0; void *x1; struct H10ISPDeviceController *x2; struct __CFDictionary *x3; struct H10ISPMotionManager *x4; struct H10ISPServicesRemote *x5; struct H10ISPFirmwareWorkProcessor *x6; unsigned int x7; struct H10ISPPlatformInfoStruct *x8; int x9; void *x10; struct __CFRunLoopSource *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x15; BOOL x16; char *x17[6]; int x18[6]; unsigned char x19[6]; char *x20[6]; int x21[6]; unsigned char x22[6]; int x23; unsigned char x24; int x25; unsigned char x26; int x27; unsigned char x28; unsigned int x29; struct H10ISPDeviceCachedConfigs { unsigned int x0; BOOL x1; struct sCIspCmdConfigGet { unsigned int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x2; struct H10ISPDeviceCachedConfigChannel *x3; } x30; unsigned int x31; } *)a0;
- (void)replaceBank:(int)a0 frameConfig:(id)a1;
- (void)setJasperFrameRateMax:(unsigned short)a0;
- (void)setJasperFrameRateMin:(unsigned short)a0;
- (int)startOffsetSequence:(int)a0 offsets:(const struct JDBankOffset { unsigned short x0; char x1; char x2; } *)a1 repeat:(int)a2 newSequence:(BOOL)a3;
- (void)updateCurrentSequenceAnchors:(const struct JDJasperAnchors { struct JDBankAnchors { unsigned char x0[144]; unsigned char x1[144]; unsigned long long x2; } x0[4]; } *)a0;
- (void)updateJasperCalib:(const void *)a0;
- (void)updateJasperCalibSpots:(const struct JasperCalibSpotLocations { struct { struct { float x0; float x1; } x0[144]; } x0[4]; float x1; unsigned int x2; } *)a0;
- (void)wakeupHasCompleted:(int)a0;

@end
