@class Logger, PSSpecifier, NSString, CHManager, PSListController;

@interface PSUICallTimeGroup : NSObject <Loggable> {
    Logger *_logger;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSSpecifier *currentCallTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *lifetimeCallTimeSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListController:(id)a0;
- (void).cxx_destruct;
- (id)specifiers;
- (id)getLogger;
- (id)callTime:(id)a0;
- (id)lifetimeCallTime:(id)a0;
- (void)handleCallTimersChanged;
- (id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)a0;

@end
