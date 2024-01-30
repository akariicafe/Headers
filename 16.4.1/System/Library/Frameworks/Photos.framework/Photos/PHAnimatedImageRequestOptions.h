@interface PHAnimatedImageRequestOptions : PHImageRequestOptions

@property (nonatomic) BOOL allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
