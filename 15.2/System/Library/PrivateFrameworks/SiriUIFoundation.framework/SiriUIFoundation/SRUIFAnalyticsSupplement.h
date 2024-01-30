@class NSString, NSArray;

@interface SRUIFAnalyticsSupplement : NSObject {
    NSString *_lastComputedRefId;
    int _lastComputedMode;
    NSArray *_generatedAceCommands;
}

- (void).cxx_destruct;
- (void)didComputeMode:(int)a0 forAceCommand:(id)a1 generatedAceCommands:(id)a2;
- (int)computedModeForRefId:(id)a0;
- (int)computedModeForAceCommand:(id)a0;

@end
