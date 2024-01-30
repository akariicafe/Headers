@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    id /* block */ _changedBlock;
}

+ (id)sharedInstance;

- (void)_queue_noteChanged;
- (void)dealloc;
- (void)registerChangedBlock:(id /* block */)a0;
- (id)displayIdentifiers;
- (id)init;
- (void).cxx_destruct;

@end
