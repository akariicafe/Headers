@class NSArray;

@interface WFOpenInAction : WFAction

@property (retain, nonatomic) NSArray *contentClasses;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)inputContentClasses;
- (id)targetContentAttribution;
- (void)openContentInSelectedApp:(id)a0;
- (void)updateContentClasses;
- (id)selectedApp;

@end
