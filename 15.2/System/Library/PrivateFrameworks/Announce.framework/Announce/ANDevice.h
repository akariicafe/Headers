@interface ANDevice : NSObject

@property (class, readonly) BOOL isAudioAccessory;
@property (class, readonly) BOOL isPad;
@property (class, readonly) BOOL isPhone;
@property (class, readonly) int deviceClass;

@end
