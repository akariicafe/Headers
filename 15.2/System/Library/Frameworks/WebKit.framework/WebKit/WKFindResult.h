@interface WKFindResult : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL matchFound;

- (id)_initWithMatchFound:(BOOL)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
