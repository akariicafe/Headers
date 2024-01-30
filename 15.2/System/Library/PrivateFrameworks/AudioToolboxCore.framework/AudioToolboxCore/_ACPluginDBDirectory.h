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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)loadAllComponents:(void *)a0;
- (void)scanDirectory;
- (id)initWithPath:(id)a0 priority:(int)a1;
- (BOOL)refreshModificationDate;
- (void)bundlesChanged:(id)a0 shouldRescan:(BOOL)a1;
- (void)eventStreamCallback:(id)a0 flags:(const unsigned int *)a1;
- (void)monitorDirectory;
- (id)scanBundle:(id)a0 loadable:(BOOL)a1;

@end
