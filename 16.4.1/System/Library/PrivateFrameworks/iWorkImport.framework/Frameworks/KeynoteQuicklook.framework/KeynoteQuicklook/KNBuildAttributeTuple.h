@class KNBuild, KNBuildChunk, NSString, KNBuildAttributeValue, NSUUID, KNBuildChunkIdentifier;

@interface KNBuildAttributeTuple : TSPObject <NSCopying> {
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    BOOL _definedAttributeValue;
    BOOL _definedBuildChunkIdentifier;
    BOOL _definedBuildId;
}

@property (readonly, nonatomic) KNBuild *build;
@property (readonly, nonatomic) KNBuildChunk *chunk;
@property (readonly, nonatomic) BOOL isBuildTuple;
@property (readonly, nonatomic) BOOL isChunkTuple;
@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) KNBuildAttributeValue *value;

+ (id)tupleForBuild:(id)a0 property:(id)a1 value:(id)a2;
+ (id)tupleWithChunk:(id)a0 property:(id)a1 value:(id)a2;
+ (id)tupleWithChunk:(id)a0 referent:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuild:(id)a0 chunk:(id)a1 property:(id)a2 value:(id)a3;
- (id)initWithBuild:(id)a0 property:(id)a1 value:(id)a2;
- (id)initWithChunk:(id)a0 property:(id)a1 value:(id)a2;
- (BOOL)isValidForSlide:(id)a0;

@end
