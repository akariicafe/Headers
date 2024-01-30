@interface WFSearchMapsAction : WFAction

- (id)appIdentifier;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)openMapsLink:(id)a0 inAppNamed:(id)a1;
- (void)openMapsURL:(id)a0 withAppIdentifier:(id)a1;
- (void)openMapItem:(id)a0;

@end
