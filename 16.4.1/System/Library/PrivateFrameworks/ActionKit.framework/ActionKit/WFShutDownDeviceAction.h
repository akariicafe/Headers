@class NSString;

@interface WFShutDownDeviceAction : WFAction {
    void /* unknown type, empty encoding */ shutdownReason;
    void /* unknown type, empty encoding */ modeParameterKey;
}

@property (nonatomic, readonly) NSString *iconSymbolName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;

@end
