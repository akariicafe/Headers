@protocol DictationOfflineStatusObserverDelegate;

@interface DictationOfflineStatusObserver : NSObject

@property (weak, nonatomic) id<DictationOfflineStatusObserverDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)updateOfflineDictationStatus;

@end
