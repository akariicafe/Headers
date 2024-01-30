@class SRDevice;

@interface SRFetchRequest : NSObject

@property double from;
@property double to;
@property (retain) SRDevice *device;

- (void)dealloc;
- (id)init;

@end
