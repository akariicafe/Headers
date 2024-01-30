@class NSSQLEntity, NSExpression, NSAttributeDescription;

@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSAttributeDescription *_target;
    NSExpression *_bounds;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)initWithWorkingEntity:(id)a0 target:(id)a1 bounds:(id)a2 scope:(id)a3;
- (void)dealloc;

@end
