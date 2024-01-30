@class NSArray, NSMutableArray, NSString;

@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting>

@property (readonly, nonatomic) NSMutableArray *_logEntries;
@property (readonly, nonatomic) NSArray *currentLogEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isLoggingEnabled;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (BOOL)debugStateCanDisplayDetails;
- (id)debugStateDetailViewController;
- (void)_purgeOldLogEntries;
- (id)sharpenerLogWithCurrentContent;
- (void)logEntryForAppliedResult:(id)a0;

@end
