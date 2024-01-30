@protocol DictationOfflineStatusObserverDelegate;

@interface DictationOfflineStatusObserver : NSObject

@property (weak, nonatomic) id<DictationOfflineStatusObserverDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateOfflineDictationStatus;

@end
