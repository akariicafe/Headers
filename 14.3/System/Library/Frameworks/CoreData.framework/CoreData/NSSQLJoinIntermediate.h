@class NSString, NSSQLRelationship;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
    NSSQLRelationship *_relationship;
    NSString *_sourceAlias;
    NSString *_destinationAlias;
    NSString *_correlationAlias;
    unsigned long long _type;
    BOOL _direct;
}

+ (id)createJoinIntermediatesForKeypath:(id)a0 startEntity:(id)a1 startAlias:(id)a2 forScope:(id)a3 inStatementIntermediate:(id)a4 inContext:(id)a5;
+ (id)createToOneJoinIntermediateForProperty:(id)a0 lastStep:(id)a1 inScope:(id)a2 context:(id)a3;
+ (id)createManyToManyJoinIntermediateForProperty:(id)a0 direct:(BOOL)a1 lastStep:(id)a2 inScope:(id)a3 context:(id)a4;
+ (id)createToManyJoinIntermediateForProperty:(id)a0 lastStep:(id)a1 inScope:(id)a2 context:(id)a3;

- (id)destinationEntity;
- (id)sourceEntity;
- (void)setDestinationAlias:(id)a0;
- (id)correlationAlias;
- (id)sourceAlias;
- (void)dealloc;
- (id)relationship;
- (id)generateSQLStringInContext:(id)a0;
- (void)setSourceAlias:(id)a0;
- (BOOL)isDirect;
- (id)description;
- (id)destinationAlias;
- (id)initForRelationship:(id)a0 sourceAlias:(id)a1 destinationAlias:(id)a2 correlationAlias:(id)a3 direct:(BOOL)a4 inScope:(id)a5;
- (id)_generateToManySQLStringInContext:(id)a0;
- (id)_generateToOneSQLStringInContext:(id)a0;
- (id)_generateManyToManySQLStringInContext:(id)a0;
- (void)setDirect:(BOOL)a0;
- (void)setJoinType:(unsigned long long)a0;
- (BOOL)joinType;

@end
