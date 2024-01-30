@class WRM_iRATProximityRecommendationLogging, WRM_iRATInterface;

@interface SiriCoreLinkRecommendationInfo : NSObject {
    BOOL _btPreference;
    BOOL _wifiPreference;
    double _timeTaken;
    WRM_iRATProximityRecommendationLogging *_linkRecommendationMetrics;
    WRM_iRATInterface *_iRATClient;
}

- (id)initWithQueue:(id)a0;
- (double)timeTaken;
- (void).cxx_destruct;
- (void)setTimeTaken:(double)a0;
- (void)setWiFiPreference:(BOOL)a0;
- (BOOL)btPreference;
- (BOOL)wifiPreference;
- (void)setLinkMetrics:(id)a0;
- (void)setBTPreference:(BOOL)a0;
- (id)initWithPreferences:(BOOL)a0 wifiPreference:(BOOL)a1 timeTaken:(double)a2 metrics:(id)a3;
- (void)resetLinkMetrics;
- (id)linkMetrics;
- (void)fetchLinkMetrics:(id /* block */)a0;

@end
