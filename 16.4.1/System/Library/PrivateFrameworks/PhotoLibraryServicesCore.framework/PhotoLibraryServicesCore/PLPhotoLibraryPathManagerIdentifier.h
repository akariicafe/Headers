@class NSString;

@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char bundleFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPathManagerIdentifier:(id)a0;
- (id)initWithPathManager:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLibraryID:(id)a0 libraryFormat:(unsigned char)a1;
- (void).cxx_destruct;

@end
