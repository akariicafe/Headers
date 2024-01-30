@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    id /* block */ _changedBlock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)displayIdentifiers;
- (void)registerChangedBlock:(id /* block */)a0;
- (void)_queue_noteChanged;

@end
