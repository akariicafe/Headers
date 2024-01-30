@class NSArray, NSMutableArray;

@interface NPKStandaloneProvisioningNumericEntryCoordinator : NSObject

@property (retain, nonatomic) NSArray *providedFields;
@property (retain, nonatomic) NSMutableArray *completedFields;
@property (nonatomic) unsigned long long currentIndex;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_showCurrentPasscodePromptOrComplete;
- (void)_invokeCompletionHandler;
- (void)requestNumericInputForFields:(id)a0 completion:(id /* block */)a1;
- (void)_showNextPasscodePromptOrComplete;

@end
