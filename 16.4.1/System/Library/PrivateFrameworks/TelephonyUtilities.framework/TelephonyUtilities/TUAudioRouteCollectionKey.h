@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *mode;

- (BOOL)isEqualToAudioRouteCollectionKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 mode:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
