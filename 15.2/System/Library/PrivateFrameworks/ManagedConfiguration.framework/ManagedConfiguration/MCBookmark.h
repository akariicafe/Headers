@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serializableDictionary;
- (id)initWithSerializableDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
