@class NSUUID;

@interface KNBuildChunkIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *buildUUID;
@property (readonly, nonatomic) int chunkID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)emptyIdentifier;

- (id)initWithMessage:(const void *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)resolveToChunkOnSlide:(id)a0;
- (id)initWithBuild:(id)a0 chunkID:(int)a1;
- (void)saveToMessage:(void *)a0;
- (id)resolveToChunkUsingContext:(id)a0;
- (id)initEmptyIdentifier;

@end
