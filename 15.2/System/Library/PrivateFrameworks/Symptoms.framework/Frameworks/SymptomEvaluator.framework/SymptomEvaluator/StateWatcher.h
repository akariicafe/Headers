@class NSDictionary, NSMutableDictionary;
@protocol StateWatcherDelegate;

@interface StateWatcher : NSObject {
    NSDictionary *_srcDestMapping;
    NSDictionary *_changeWatchList;
    NSMutableDictionary *_previousChangeWatchValues;
}

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) id<StateWatcherDelegate> delegate;

- (void)disable;
- (void)enable;
- (BOOL)isValidChangeList:(id)a0;
- (BOOL)isValidSourceList:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWatchList:(id)a0 changeList:(id)a1 sourceList:(id)a2;
- (id)currentStateSummary:(id)a0;
- (void)deriveKeyPathListFromWatchList:(id)a0 sourceList:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isValidWatchList:(id)a0;

@end
