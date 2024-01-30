@interface WKFindConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL backwards;
@property (nonatomic) BOOL caseSensitive;
@property (nonatomic) BOOL wraps;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
