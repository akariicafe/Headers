@class NSData, AVExternalDeviceIconInternal;

@interface AVExternalDeviceIcon : NSObject {
    AVExternalDeviceIconInternal *_externalDeviceIcon;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;

@end
