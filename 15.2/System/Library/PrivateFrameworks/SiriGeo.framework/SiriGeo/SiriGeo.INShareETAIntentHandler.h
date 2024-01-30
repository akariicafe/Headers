@interface SiriGeo.INShareETAIntentHandler : NSObject <INShareETAIntentHandling> {
    void /* unknown type, empty encoding */ logObject;
    void /* unknown type, empty encoding */ sharedTripContact;
    void /* unknown type, empty encoding */ contactService;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleShareETA:(id)a0 completion:(id /* block */)a1;
- (void)confirmShareETA:(id)a0 completion:(id /* block */)a1;
- (void)resolveRecipientsForShareETA:(id)a0 withCompletion:(id /* block */)a1;

@end
