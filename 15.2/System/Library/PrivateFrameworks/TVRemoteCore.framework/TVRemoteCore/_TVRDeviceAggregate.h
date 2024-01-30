@class _TVRCMRTelevisionWrapper, _TVRCRPCompanionLinkClientWrapper, _TVRCRMSDeviceWrapper, _TVRCHMServiceWrapper, _TVRXDevice;

@interface _TVRDeviceAggregate : NSObject

@property (retain, nonatomic) _TVRCMRTelevisionWrapper *mediaRemote;
@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *rapport;
@property (retain, nonatomic) _TVRCRMSDeviceWrapper *remoteMediaService;
@property (retain, nonatomic) _TVRCHMServiceWrapper *homeKit;
@property (retain, nonatomic) _TVRXDevice *publicDevice;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)bestImpl;

@end
