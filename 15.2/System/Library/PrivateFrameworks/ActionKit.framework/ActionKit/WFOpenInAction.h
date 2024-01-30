@class NSArray;

@interface WFOpenInAction : WFAction

@property (retain, nonatomic) NSArray *contentClasses;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputContentClasses;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (BOOL)inputsMultipleItems;
- (void)openContentInSelectedApp:(id)a0;
- (void)openContentUsingDefaultApp:(id)a0;
- (void)updateContentClasses;
- (id)selectedApp;

@end
