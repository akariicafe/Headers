@interface PhotosUIApps.PXObservation : NSObject <PXChangeObserver> {
    void /* unknown type, empty encoding */ observable;
    void /* unknown type, empty encoding */ changeHandler;
}

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;

@end
