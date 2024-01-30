@protocol MTLDevice;

@interface MTLMessageFilter : NSObject

@property (readonly, retain) id<MTLDevice> device;
@property (readonly) unsigned long long messageType;

+ (id)filter:(unsigned long long)a0 device:(id)a1;

- (void)setDevice:(id)a0;
- (id)init:(unsigned long long)a0 device:(id)a1;

@end
