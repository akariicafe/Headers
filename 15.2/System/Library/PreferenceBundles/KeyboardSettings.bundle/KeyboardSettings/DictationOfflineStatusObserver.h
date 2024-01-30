@protocol DictationOfflineStatusObserverDelegate;

@interface DictationOfflineStatusObserver : NSObject

@property (weak, nonatomic) id<DictationOfflineStatusObserverDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateOfflineDictationStatus;

@end
