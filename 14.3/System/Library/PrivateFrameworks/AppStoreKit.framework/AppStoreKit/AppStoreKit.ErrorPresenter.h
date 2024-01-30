@interface AppStoreKit.ErrorPresenter : NSObject <ASKAirplaneModeInquiryDelegate> {
    void /* unknown type, empty encoding */ networkInquiry;
    void /* unknown type, empty encoding */ airplaneModeInquiry;
    void /* unknown type, empty encoding */ cellularDataInquiry;
    void /* unknown type, empty encoding */ networkObservation;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ reasonForNoInternet;
    void /* unknown type, empty encoding */ error;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)airplaneModeInquiryDidObserveChange:(id)a0;

@end
