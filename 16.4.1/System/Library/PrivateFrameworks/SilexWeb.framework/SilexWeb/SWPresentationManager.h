@class NSNumber, NSString;
@protocol SWLogger, SWScriptsManager;

@interface SWPresentationManager : NSObject <SWMessageHandler, SWPresentationManager>

@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (retain, nonatomic) NSNumber *heightValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long presentationState;
@property (readonly, nonatomic) double height;
@property (copy, nonatomic, setter=onLoad:) id /* block */ loadBlock;
@property (copy, nonatomic, setter=onPresentable:) id /* block */ presentableBlock;

- (void)refresh;
- (void).cxx_destruct;
- (id)descriptionForPresentationState:(unsigned long long)a0;
- (void)didReceiveMessage:(id)a0 securityOrigin:(id)a1;
- (id)initWithWebContentScriptsManager:(id)a0 messageHandlerManager:(id)a1 documentStateProvider:(id)a2 logger:(id)a3;

@end
