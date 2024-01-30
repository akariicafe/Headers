@class NSNumber, TVRDevice;

@interface SkipContentIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (copy, nonatomic) NSNumber *skipDuration;
@property (nonatomic) long long skipCommand;

@end
