@class NSString, NSMutableSet;

@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject <SBBiometricMonitorDataSource> {
    NSMutableSet *_observers;
    long long _state;
}

@property (readonly, nonatomic) BOOL presenceDetectRunning;
@property (readonly, nonatomic) BOOL matchRunning;
@property (readonly, nonatomic) BOOL poseIsMarginal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
