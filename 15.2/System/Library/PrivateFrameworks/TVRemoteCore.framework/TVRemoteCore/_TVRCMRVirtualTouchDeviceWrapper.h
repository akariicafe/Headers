@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {
    void *_deviceDescriptor;
}

@property (nonatomic, getter=isAbsolute) BOOL absolute;
@property (nonatomic, getter=isDisplayIntegrated) BOOL displayIntegrated;
@property (nonatomic) struct CGSize { double x0; double x1; } screenSize;

- (void *)deviceDescriptor;
- (id)init;
- (void)dealloc;

@end
