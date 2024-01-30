@class NSString, NSSQLRelationship;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
    NSSQLRelationship *_relationship;
    NSString *_sourceAlias;
    NSString *_destinationAlias;
    NSString *_correlationAlias;
    unsigned long long _type;
    BOOL _direct;
}

- (id)description;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;

@end
