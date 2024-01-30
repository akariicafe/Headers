@interface SeymourClient.AppRecordObserver : NSObject <ASDAppQueryResultsObserver> {
    void /* unknown type, empty encoding */ onRecordUpdated;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ bundleIdentifier;
}

- (void)appQuery:(id)a0 resultsDidChange:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
