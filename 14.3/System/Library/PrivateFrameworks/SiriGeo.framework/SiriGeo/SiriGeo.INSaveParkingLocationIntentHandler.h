@interface SiriGeo.INSaveParkingLocationIntentHandler : NSObject <INSaveParkingLocationIntentHandling> {
    void /* unknown type, empty encoding */ logObject;
    void /* unknown type, empty encoding */ locationController;
    void /* unknown type, empty encoding */ completion;
}

- (void)handleSaveParkingLocation:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)resolveParkingLocationForSaveParkingLocation:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
