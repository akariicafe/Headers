@class NSDate, NSString, NSArray, NSURL, NSMutableArray, NKLibrary, NSMutableSet, NSMapTable;

@interface NKIssue : NSObject <NSSecureCoding> {
    NKLibrary *_library;
    NSMutableArray *_assets;
    NSMapTable *_assetsByRequest;
    NSMutableSet *_resolvedAssets;
    BOOL _foundContent;
    BOOL _isDecodingValid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSDate *date;
@property (copy) NSString *directory;
@property (nonatomic, setter=_setLibrary:) NKLibrary *_library;
@property (readonly, copy) NSArray *downloadingAssets;
@property (readonly, copy) NSURL *contentURL;
@property (readonly) long long status;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_directory;
- (id)_commonInit;
- (void)dealloc;
- (id)_initWithName:(id)a0 date:(id)a1 directory:(id)a2;
- (BOOL)_isDecodingValid;
- (id)addAssetWithRequest:(id)a0;
- (id)_assetsForRequest:(id)a0;
- (void)_markAssetAsResolved:(id)a0;
- (void)_cleanupAsset:(id)a0;
- (void)_assetChanged:(id)a0;

@end
