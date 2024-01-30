@interface SiriGeo.INStopShareETAIntentHandler : NSObject <INStopShareETAIntentHandling> {
    void /* unknown type, empty encoding */ logObject;
    void /* unknown type, empty encoding */ contactService;
    void /* unknown type, empty encoding */ sharedTripContact;
}

- (void)handleStopShareETA:(id)a0 completion:(id /* block */)a1;
- (void)confirmStopShareETA:(id)a0 completion:(id /* block */)a1;
- (void)resolveRecipientsForStopShareETA:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
