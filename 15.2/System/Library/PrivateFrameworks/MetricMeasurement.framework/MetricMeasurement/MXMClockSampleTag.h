@interface MXMClockSampleTag : MXMSampleTag

@property (class, readonly, nonatomic, getter=ancestery) MXMClockSampleTag *allTime;
@property (class, readonly, nonatomic) MXMClockSampleTag *absoluteTime;
@property (class, readonly, nonatomic) MXMClockSampleTag *continuousTime;

@end
