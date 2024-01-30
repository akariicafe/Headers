@class NSString, NSObject;
@protocol OS_os_log, CABrightnessControl;

@interface CBBrightnessProxyCA : NSObject <CBBrightnessProxy> {
    NSObject<OS_os_log> *_logHandle;
    id<CABrightnessControl> _brightnessControl;
}

@property (readonly) id brightnessNotificationRequestEDR;
@property (readonly) NSString *brightnessRequestEDRHeadroom;
@property (readonly) NSString *brightnessRequestRampDuration;
@property (readonly) id CBDispTypeIntegrated;
@property (readonly) id CBDispTypeExternal;
@property (readonly) id CBDispTypeWireless;
@property (readonly) id CBDispTypeVirtual;
@property (readonly) id CBDispTypeDFR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPotentialHeadroom:(float)a0;
- (void)setNotificationQueue:(id)a0;
- (void)registerForNotifications:(id)a0 withBlock:(id /* block */)a1;
- (void)setBrightnessLimit:(float)a0;
- (void)setHeadroom:(float)a0;
- (BOOL)commitBrightness:(id *)a0;
- (void)setAmbient:(float)a0;
- (BOOL)setWhitePoint:(id)a0 rampDuration:(double)a1 error:(id *)a2;
- (id)getUUID;
- (void)setSDRBrightness:(float)a0;
- (void)unregisterNotificationBlocks;
- (void)dealloc;
- (unsigned int)getDisplayId;
- (id)getBrightnessCapabilities;
- (id)getDisplayType;
- (id)initWithCABrightnessControl:(id)a0;
- (unsigned long long)getVendorId;
- (unsigned long long)getProductId;
- (BOOL)isBrightnessAvailable;
- (BOOL)isWhitePointAvailable;
- (BOOL)isWhitePointD50XYZ;

@end
