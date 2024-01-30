@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {
    NSString *_rawSQL;
}

+ (id)checkConstraintWithSQL:(id)a0;

- (void).cxx_destruct;
- (id)SQLCheckConstraint;

@end
