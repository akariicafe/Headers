@class WRM_iRATProximityRecommendationLogging, WRM_iRATInterface;

@interface SiriCoreLinkRecommendationInfo : NSObject {
    BOOL _btPreference;
    BOOL _wifiPreference;
    double _timeTaken;
    WRM_iRATProximityRecommendationLogging *_linkRecommendationMetrics;
    WRM_iRATInterface *_iRATClient;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (double)timeTaken;
- (void)setTimeTaken:(double)a0;
- (void)setLinkMetrics:(id)a0;
- (BOOL)btPreference;
- (void)fetchLinkMetrics:(id /* block */)a0;
- (id)initWithPreferences:(BOOL)a0 wifiPreference:(BOOL)a1 timeTaken:(double)a2 metrics:(id)a3;
- (id)linkMetrics;
- (void)resetLinkMetrics;
- (void)setBTPreference:(BOOL)a0;
- (void)setWiFiPreference:(BOOL)a0;
- (BOOL)wifiPreference;

@end
