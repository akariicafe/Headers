@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSerializableDictionary:(id)a0;
- (id)serializableDictionary;

@end
