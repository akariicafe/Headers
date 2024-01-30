@class NSObject;
@protocol OS_nw_path_flow_registration, OS_nw_path_flow, OS_nw_interface;

@interface nw_interpose_flow : NSObject {
    NSObject<OS_nw_interface> *_interface;
    NSObject<OS_nw_path_flow_registration> *_registration;
    NSObject<OS_nw_path_flow> *_flow;
    id /* block */ _eventHandler;
}

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)clearFlowEventHandler;
- (void)closeFlow;
- (id)initWithInterface:(id)a0 registration:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)matchNexusAgent:(unsigned char[16])a0;
- (BOOL)matchNexusAgentWithFlow:(id)a0;
- (BOOL)matchNexusInstance:(id)a0;
- (void)notifyFlowEvent:(int)a0;
- (void)resetFlow:(id)a0;

@end
