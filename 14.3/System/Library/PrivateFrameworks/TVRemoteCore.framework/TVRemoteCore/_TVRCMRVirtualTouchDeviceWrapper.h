@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {
    void *_deviceDescriptor;
}

@property (nonatomic, getter=isAbsolute) BOOL absolute;
@property (nonatomic, getter=isDisplayIntegrated) BOOL displayIntegrated;
@property (nonatomic) struct CGSize { double x0; double x1; } screenSize;

- (id)init;
- (void)dealloc;
- (void *)deviceDescriptor;

@end
