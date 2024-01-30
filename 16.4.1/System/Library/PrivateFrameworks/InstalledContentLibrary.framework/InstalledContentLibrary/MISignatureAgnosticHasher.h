@class NSURL, NSString, NSDictionary;

@interface MISignatureAgnosticHasher : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *sectionName;
@property (nonatomic) int fd;
@property (nonatomic) unsigned int countOfSlicesWithNamedSection;
@property (readonly, nonatomic) BOOL hasNamedSection;
@property (readonly, nonatomic) NSDictionary *hashes;

+ (id)packedNumberForCPUType:(int)a0 subtype:(int)a1;
+ (void)unpackPackedCpuTypeAndSubType:(id)a0 cputype:(int *)a1 subtype:(int *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_hashSliceAtOffset:(long long)a0 withSize:(long long)a1 machHeaderAndCommands:(const struct mach_header { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a2 dictionaryKey:(id *)a3 error:(id *)a4;
- (id)initWithExecutable:(id)a0 searchForSectionNamed:(id)a1;
- (BOOL)performHashWithError:(id *)a0;

@end
