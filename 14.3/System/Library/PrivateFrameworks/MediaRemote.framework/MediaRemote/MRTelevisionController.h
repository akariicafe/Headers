@class _MRTelevisionControllerBlockCallback, NSString;

@interface MRTelevisionController : MRExternalDeviceController <MRExternalDeviceControllerDelegate>

@property (retain, nonatomic) _MRTelevisionControllerBlockCallback *discoveryCallback;
@property (retain, nonatomic) _MRTelevisionControllerBlockCallback *removalCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalDeviceClass;

@end
