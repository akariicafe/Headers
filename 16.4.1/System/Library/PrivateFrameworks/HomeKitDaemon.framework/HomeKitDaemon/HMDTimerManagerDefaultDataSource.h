@class NSString;

@interface HMDTimerManagerDefaultDataSource : NSObject <HMDTimerManagerDataSource>

@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;

@end
