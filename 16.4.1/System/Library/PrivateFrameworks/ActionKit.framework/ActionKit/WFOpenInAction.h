@class NSArray;

@interface WFOpenInAction : WFAction

@property (retain, nonatomic) NSArray *contentClasses;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputContentClasses;
- (BOOL)inputsMultipleItems;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)openContentInSelectedApp:(id)a0;
- (void)openContentUsingDefaultApp:(id)a0;
- (id)selectedApp;
- (void)updateContentClasses;

@end
