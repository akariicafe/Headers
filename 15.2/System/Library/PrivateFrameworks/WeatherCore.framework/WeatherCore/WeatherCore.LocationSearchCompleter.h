@interface WeatherCore.LocationSearchCompleter : NSObject <MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ onUpdate;
    void /* unknown type, empty encoding */ onError;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ searchCompleter;
}

- (void)completerDidUpdateResults:(id)a0;
- (void)completer:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
