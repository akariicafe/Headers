@class NSString, SLGLog, SBBacklightController;

@interface SBBacklightStudyLogger : NSObject <SBBacklightControllerObserver> {
    SLGLog *_logger;
    SBBacklightController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
