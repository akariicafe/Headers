@interface StocksCore.CloudKitWatchlistService : _TtCs12_SwiftObject <SCWatchlistObserver> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ metadataManager;
    void /* unknown type, empty encoding */ metadataProvider;
    void /* unknown type, empty encoding */ lazyWatchlist;
}

- (void)watchlist:(id)a0 didChangeWithDiff:(id)a1;

@end
