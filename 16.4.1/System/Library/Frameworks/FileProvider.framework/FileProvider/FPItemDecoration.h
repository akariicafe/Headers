@class NSString, FPStringFormat;

@interface FPItemDecoration : NSObject {
    FPStringFormat *_labelTitle;
    BOOL _dependsOnParent;
    BOOL _dependsOnStyle;
}

@property (readonly, copy, nonatomic) NSString *decorationIdentifier;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *imageType;
@property (readonly, nonatomic) BOOL requiresFetchingInfoFirst;

+ (void)initialize;
+ (void)_invalidateCache;
+ (id)_decorationCache;
+ (id)_fetchFromCacheWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (void)_loadBuiltinDecorationTypes;
+ (id)_loadDecorationsFromPlist:(id)a0 bundleIdentifier:(id)a1 bundle:(struct __CFBundle { } *)a2;
+ (id)decorationWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (void)fetchInfoForItem:(id)a0 completionHandler:(id /* block */)a1;
+ (id)infoForItem:(id)a0 parentInfo:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)folderStatusForItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPlistEntry:(id)a0 bundle:(struct __CFBundle { } *)a1 bundleIdentifier:(id)a2;
- (id)labelWithInfo:(id)a0 error:(id *)a1;
- (id)labelWithInfo:(id)a0 error:(id *)a1 style:(unsigned long long)a2;
- (id)labelWithItem:(id)a0 error:(id *)a1;
- (id)labelWithItem:(id)a0 error:(id *)a1 style:(unsigned long long)a2;
- (id)labelsWithInfo:(id)a0 error:(id *)a1;
- (id)labelsWithItem:(id)a0 error:(id *)a1;
- (id)parentDependingKeys;
- (id)styleDependingKeys;

@end
