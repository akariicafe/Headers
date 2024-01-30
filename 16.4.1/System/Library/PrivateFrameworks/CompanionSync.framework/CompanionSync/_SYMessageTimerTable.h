@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _SYMessageTimerTable : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_rwlock;
    NSMutableDictionary *_bySeqno;
    NSMutableDictionary *_byIdent;
}

@property (readonly, nonatomic) unsigned long long timerCount;

- (void)cancelAllTimers;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanupTimerForSeqno:(unsigned long long)a0;
- (void)_fireCallbackForSeqno:(unsigned long long)a0;
- (void)addTimerWithFireDate:(id)a0 forSequenceNumber:(unsigned long long)a1;
- (void)cancelTimerForIdentifier:(id)a0;
- (void)cancelTimerForSequenceNumber:(unsigned long long)a0;
- (id)initWithQueue:(id)a0 timerCallback:(id /* block */)a1;
- (void)setIdentifier:(id)a0 forSequenceNumber:(unsigned long long)a1;

@end
