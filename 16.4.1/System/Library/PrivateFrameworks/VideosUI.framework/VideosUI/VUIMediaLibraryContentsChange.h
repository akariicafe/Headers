@interface VUIMediaLibraryContentsChange : NSObject <NSCopying>

@property (nonatomic) unsigned long long revision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithRevision:(unsigned long long)a0;

@end
