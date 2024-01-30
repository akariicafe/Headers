@class MNDirectionsRequestManager, GEOApplicationAuditToken;

@interface MNNavigationClientProxy : NSObject {
    GEOApplicationAuditToken *_auditToken;
    MNDirectionsRequestManager *_directionsRequestManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)_directionsRequestManager;
- (void)cancelDirectionsRequestWithIdentifier:(id)a0;
- (void)requestDirections:(id)a0 withIdentifier:(id)a1 handler:(id /* block */)a2;

@end
