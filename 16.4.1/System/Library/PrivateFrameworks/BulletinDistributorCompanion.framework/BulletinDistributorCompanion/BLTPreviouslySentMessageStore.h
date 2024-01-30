@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BLTPreviouslySentMessageStore : NSObject {
    NSMutableDictionary *_messageDigests;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_saveTimer;
    NSString *_path;
}

@property (nonatomic) BOOL dirty;

- (void)_save;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)clear;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_cancelSave;
- (void)_enqueueSave;
- (id)initWithMessageStorePath:(id)a0;
- (id)messageDigestForUnsentMessage:(id)a0 messageKey:(id)a1;
- (void)recordMessageDigestAsPreviouslySent:(id)a0 messageKey:(id)a1;
- (void)removeDigestForKey:(id)a0;

@end
