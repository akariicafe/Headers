@class NSString, NSUUID, NSURL, FPDVolumeManager;

@interface FPDVolume : NSObject

@property (readonly, nonatomic) NSString *root;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) int dev;
@property (readonly, nonatomic) unsigned int role;
@property (readonly, nonatomic) BOOL isLibraryConfigured;
@property (readonly, nonatomic) BOOL isDefaultVolumeForCurrentPersona;
@property (readonly, nonatomic) NSURL *syncRootsDirectory;
@property (readonly, nonatomic) NSURL *systemDirectory;
@property (readonly, nonatomic) NSURL *purgatoryDirectory;
@property (readonly, weak, nonatomic) FPDVolumeManager *volumeManager;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_hasCloudStorageDirAtRoot;
- (void)enumerateDomainsWithBlock:(id /* block */)a0;
- (id)initWithVolumeInfo:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 knownRole:(unsigned int)a1 volumeManager:(id)a2;
- (BOOL)isEligibleForFPFS:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (unsigned int)resolveRoleForVolume:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (BOOL)satisfyNonDefaultVolumeCriteria:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 volumeManager:(id)a1;

@end
