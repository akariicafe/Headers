@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)appHeroAppReason;
- (id)localizedStringForKey:(id)a0;
- (id)actionBehavioralReason;
- (id)appInstalledAppClipReason;
- (id)appBehavioralReason;
- (id)appLocationBasedAppClipReason;
- (id)init;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (void).cxx_destruct;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;

@end
