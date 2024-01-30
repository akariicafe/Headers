@interface PHAnimatedImageRequestOptions : PHImageRequestOptions

@property (nonatomic) BOOL allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
