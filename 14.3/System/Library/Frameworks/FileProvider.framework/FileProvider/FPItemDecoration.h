@class NSString, NSArray;

@interface FPItemDecoration : NSObject {
    NSString *_labelFormat;
    NSArray *_labelKeys;
    BOOL _dependsOnParent;
    BOOL _dependsOnStyle;
}

@property (readonly, copy, nonatomic) NSString *decorationIdentifier;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *imageType;
@property (readonly, nonatomic) BOOL requiresFetchingInfoFirst;

+ (void)initialize;
+ (id)decorationWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)_decorationCache;
+ (id)_loadDecorationsFromPlist:(id)a0 bundleIdentifier:(id)a1 bundle:(struct __CFBundle { } *)a2;
+ (void)_loadBuiltinDecorationTypes;
+ (id)_fetchFromCacheWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (void)fetchInfoForItem:(id)a0 completionHandler:(id /* block */)a1;
+ (id)infoForItem:(id)a0 parentInfo:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)styleDependingKeys;
- (id)initWithPlistEntry:(id)a0 bundle:(struct __CFBundle { } *)a1 bundleIdentifier:(id)a2;
- (id)parentDependingKeys;
- (id)labelWithItem:(id)a0 error:(id *)a1 style:(unsigned long long)a2;
- (id)labelWithInfo:(id)a0 error:(id *)a1;
- (id)labelWithInfo:(id)a0 error:(id *)a1 style:(unsigned long long)a2;
- (id)labelWithItem:(id)a0 error:(id *)a1;
- (id)labelsWithInfo:(id)a0 error:(id *)a1;
- (id)labelsWithItem:(id)a0 error:(id *)a1;
- (void)folderStatusForItem:(id)a0 completionHandler:(id /* block */)a1;

@end
