@class NSString;

@interface FCMagazineGenre : NSObject <NSCopying>

@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)magazineGenreWithGenre:(id)a0 localizedDescription:(id)a1;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGenre:(id)a0 localizedDescription:(id)a1;
- (unsigned long long)hash;

@end
