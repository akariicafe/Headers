@class NSArray;

@interface TSDMovieFingerprint : TSKSosBase <NSCopying> {
    int _versionMajor;
    int _versionMinor;
    int _versionPatch;
}

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) unsigned long long version;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTracks:(id)a0 version:(unsigned long long)a1;
- (id)initWithTracks:(id)a0;

@end
