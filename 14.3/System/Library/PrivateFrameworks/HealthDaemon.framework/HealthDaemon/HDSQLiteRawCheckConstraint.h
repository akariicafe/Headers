@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {
    NSString *_rawSQL;
}

+ (id)checkConstraintWithSQL:(id)a0;

- (void).cxx_destruct;
- (id)SQLCheckConstraint;
- (id)_initWithSQL:(id)a0;

@end
