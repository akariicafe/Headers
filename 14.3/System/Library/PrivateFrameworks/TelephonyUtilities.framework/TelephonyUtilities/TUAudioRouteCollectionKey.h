@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *mode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAudioRouteCollectionKey:(id)a0;
- (id)initWithCategory:(id)a0 mode:(id)a1;

@end
