@interface RemindersUICore.TTRReminderLocationPickerLocalSearchResultItemProvider : NSObject <MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ localSearchCompleter;
    void /* unknown type, empty encoding */ currentSearchText;
    void /* unknown type, empty encoding */ currentSearchLocation;
    void /* unknown type, empty encoding */ currentFetchPromise;
}

- (void)completer:(id)a0 didFailWithError:(id)a1;
- (void)completerDidUpdateResults:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
