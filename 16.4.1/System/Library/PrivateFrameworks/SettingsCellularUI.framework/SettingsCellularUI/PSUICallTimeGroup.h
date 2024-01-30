@class PSSpecifier, NSString, CHManager, PSListController;

@interface PSUICallTimeGroup : NSObject <Loggable>

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSSpecifier *currentCallTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *lifetimeCallTimeSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0;
- (id)callTime:(id)a0;
- (id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)a0;
- (void)handleCallTimersChanged;
- (id)lifetimeCallTime:(id)a0;

@end
