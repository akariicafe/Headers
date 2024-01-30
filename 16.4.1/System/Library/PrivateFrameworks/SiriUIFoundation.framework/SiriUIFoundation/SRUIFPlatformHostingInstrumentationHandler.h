@class NSMutableDictionary, AFAnalyticsTurnBasedInstrumentationContext;
@protocol SRUIFPlatformHostingInstrumentationHandlerDelegate;

@interface SRUIFPlatformHostingInstrumentationHandler : NSObject {
    NSMutableDictionary *_machAbsoluteForAppearances;
    AFAnalyticsTurnBasedInstrumentationContext *_bringUpTurnIdentifier;
    AFAnalyticsTurnBasedInstrumentationContext *_dismissalTurnIdentifier;
    id<SRUIFPlatformHostingInstrumentationHandlerDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)appearanceDidChange:(unsigned long long)a0 machAbsoluteTime:(unsigned long long)a1;
- (void)hostingBringUpProcessedWithTurnIdenitfier:(id)a0;
- (void)hostingDismissalProcessedWithTurnIdenitfier:(id)a0;
- (void)_computeStateAndInstrumentIfNecessaryForEvent:(unsigned long long)a0;
- (void)_instrumentForappearanceEvent:(unsigned long long)a0 turn:(id)a1 machAbolsuteTime:(unsigned long long)a2;

@end
