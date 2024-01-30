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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAllTimers;
- (id)initWithQueue:(id)a0 timerCallback:(id /* block */)a1;
- (void)setIdentifier:(id)a0 forSequenceNumber:(unsigned long long)a1;
- (void)cancelTimerForSequenceNumber:(unsigned long long)a0;
- (void)addTimerWithFireDate:(id)a0 forSequenceNumber:(unsigned long long)a1;
- (void)cancelTimerForIdentifier:(id)a0;
- (void)_fireCallbackForSeqno:(unsigned long long)a0;
- (void)_cleanupTimerForSeqno:(unsigned long long)a0;

@end
