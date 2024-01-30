@class NSString;
@protocol HDSPEventScheduleDelegate;

@interface HDSPGCDTimerScheduler : NSObject <HDSPEventScheduler>

@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (weak, nonatomic) id<HDSPEventScheduleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
