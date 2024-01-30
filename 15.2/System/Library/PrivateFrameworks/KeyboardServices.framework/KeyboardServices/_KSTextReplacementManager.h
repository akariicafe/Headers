@class _KSTextReplacementCKStore, NSString, NSObject;
@protocol _KSTextReplacementSyncProtocol;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol>

@property (retain, nonatomic) _KSTextReplacementCKStore *ckStore;
@property (retain, nonatomic) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore;
@property (copy, nonatomic) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textReplacementStoreWithTestDirectory:(id)a0 withDelegate:(id)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (double)minimumUptimeRemaining;
- (id)initWithDirectoryPath:(id)a0;
- (void).cxx_destruct;
- (void)notifyTextReplacementDidChange;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void)recordSyncStatus;
- (void)dealloc;
- (void)pushAllLocalRecordsOnceIfNeeded;

@end
