@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)localizedStringForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)appBehavioralReason;
- (id)appInstalledAppClipReason;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)actionBehavioralReason;
- (id)appHeroAppReason;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appLocationBasedAppClipReason;

@end
