@class NSString, SLGLog, SBLiftToWakeController;

@interface SBLiftToWakeStudyLogger : NSObject <SBLiftToWakeObserver> {
    SLGLog *_logger;
    SBLiftToWakeController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
