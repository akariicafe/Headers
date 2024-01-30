@class NSString, NSMutableArray;

@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting> {
    NSMutableArray *__logEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)debugStateCanDisplayDetails;
- (id)debugStateDetailViewController;
- (void)reportDebugStateDescription:(id /* block */)a0;

@end
