@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializableDictionary;
- (id)initWithSerializableDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
