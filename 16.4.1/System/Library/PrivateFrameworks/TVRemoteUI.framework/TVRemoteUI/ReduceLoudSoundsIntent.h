@class NSNumber, TVRDevice;

@interface ReduceLoudSoundsIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (copy, nonatomic) NSNumber *toggle;

@end
