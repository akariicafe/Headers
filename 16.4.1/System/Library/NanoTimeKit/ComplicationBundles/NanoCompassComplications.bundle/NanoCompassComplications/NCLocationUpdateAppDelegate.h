@class RBSAssertion;

@interface NCLocationUpdateAppDelegate : NCLocationUpdateBaseDelegate {
    RBSAssertion *_locationAuthQueryAssertion;
}

- (void).cxx_destruct;
- (double)initialAccuracy;
- (void)_cancelLocationAuthRequestAssertion;
- (double)_getRangeToStart1HzLocationUpdate;
- (void)_takeLocationAuthRequestAssertion;
- (void)activateWaypointComplication;
- (double)expectedAccuracy;
- (void)updateLocationManagerWithCurrentAuthorizationStatus;

@end
