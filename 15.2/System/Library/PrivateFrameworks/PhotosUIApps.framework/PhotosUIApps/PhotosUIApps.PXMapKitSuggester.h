@interface PhotosUIApps.PXMapKitSuggester : NSObject <MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchCompleter;
    void /* unknown type, empty encoding */ input;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ coordinateRegion;
}

- (void).cxx_destruct;
- (id)init;
- (void)completerDidUpdateResults:(id)a0;
- (void)completer:(id)a0 didFailWithError:(id)a1;

@end
