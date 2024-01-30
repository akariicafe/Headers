@interface VUIMediaLibraryContentsChange : NSObject <NSCopying>

@property (nonatomic) unsigned long long revision;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithRevision:(unsigned long long)a0;

@end
