@interface PHAssetDeleteOptions : NSObject <NSCopying>

@property (nonatomic) BOOL shouldExpungeFromLocalStorageOnly;

- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
