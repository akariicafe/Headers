@interface SiriGeo.INStopShareETAIntentHandler : NSObject <INStopShareETAIntentHandling> {
    void /* unknown type, empty encoding */ logObject;
    void /* unknown type, empty encoding */ contactService;
    void /* unknown type, empty encoding */ sharedTripContact;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmStopShareETA:(id)a0 completion:(id /* block */)a1;
- (void)handleStopShareETA:(id)a0 completion:(id /* block */)a1;
- (void)resolveRecipientsForStopShareETA:(id)a0 withCompletion:(id /* block */)a1;

@end
