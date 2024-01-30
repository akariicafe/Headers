@interface MCMFSNode : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long inode;
@property (readonly, nonatomic) int device;
@property (readonly, nonatomic) long long ctime;

- (BOOL)isEqualToFSNode:(id)a0;
- (id)initWithINode:(unsigned long long)a0 device:(int)a1 ctime:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
