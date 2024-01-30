@class _ACPluginDB, NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {
    _ACPluginDB *mDB;
    NSString *mFullPath;
    double mModificationDate;
    int mPriority;
    NSMutableDictionary *mBundlesByName;
    struct __FSEventStream { } *mFSMonitor;
    double mCurrentModificationDate;
    NSData *mCarbonComponentHash;
    BOOL mComponentsLoadable;
    NSMutableArray *mChangedBundlePaths;
    unsigned long long mNrOfPathsChanged;
    BOOL mShouldRescan;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadAllComponents:(struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; } *)a0;
- (id)initWithPath:(id)a0 priority:(int)a1;
- (BOOL)refreshModificationDate;
- (void)bundlesChanged:(id)a0 shouldRescan:(BOOL)a1;
- (void)eventStreamCallback:(id)a0 flags:(const unsigned int *)a1;
- (void)monitorDirectory;
- (void)scanDirectory;
- (id)scanBundle:(id)a0 loadable:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
