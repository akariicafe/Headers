@class NSString, LiveFSFPItemHelper, LiveFSFPExtensionHelper;

@interface LiveFSFPClusterEnumeratorHelper : NSObject <NSFileProviderEnumerator> {
    LiveFSFPExtensionHelper *ext;
}

@property (readonly) BOOL isDir;
@property int state;
@property (readonly, nonatomic) LiveFSFPItemHelper *enumeratedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithEnumeratedItem:(id)a0 extension:(id)a1 error:(id *)a2;

- (void)invalidate;
- (void).cxx_destruct;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (void)doShutdown;
- (id)initWithEnumeratedItem:(id)a0 extension:(id)a1 error:(id *)a2;

@end
