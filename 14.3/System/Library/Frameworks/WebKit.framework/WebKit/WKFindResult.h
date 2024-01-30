@interface WKFindResult : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL matchFound;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMatchFound:(BOOL)a0;

@end
