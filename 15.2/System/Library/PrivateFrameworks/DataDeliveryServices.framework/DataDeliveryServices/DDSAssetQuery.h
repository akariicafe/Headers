@class NSString, DDSAttributeFilter, NSObject;
@protocol OS_dispatch_queue;

@interface DDSAssetQuery : NSObject <NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) DDSAttributeFilter *filter;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL localOnly;
@property (nonatomic) BOOL installedOnly;
@property (nonatomic) BOOL latestOnly;
@property (nonatomic) BOOL cachedOnly;

- (BOOL)isEqualToAssetQuery:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAssetType:(id)a0 filter:(id)a1 localOnly:(BOOL)a2 installedOnly:(BOOL)a3 latestOnly:(BOOL)a4 cachedOnly:(BOOL)a5;
- (id)assetType:(id)a0;
- (id)initWithAssetType:(id)a0 filter:(id)a1;
- (void)invalidateDescription;
- (id)description;
- (id)dumpDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
