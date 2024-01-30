@class NSString, CSCoverSheetViewController;

@interface SBDashBoardAnalyticsEmitter : NSObject <CSExternalEventHandling> {
    CSCoverSheetViewController *_coverSheetViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)conformsToCSEventHandling;
- (id)initWithCoverSheetViewController:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
