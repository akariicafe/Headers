@class NSString, NSSQLRelationship;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
    NSSQLRelationship *_relationship;
    NSString *_sourceAlias;
    NSString *_destinationAlias;
    NSString *_correlationAlias;
    unsigned long long _type;
    BOOL _direct;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)description;

@end
