@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)localizedStringForKey:(id)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)appHeroAppReason;
- (id)appBehavioralReason;
- (id)actionBehavioralReason;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appLocationBasedAppClipReason;
- (void).cxx_destruct;
- (id)init;
- (id)appInstalledAppClipReason;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)appAnchorReasonForAnchorType:(id)a0;

@end
