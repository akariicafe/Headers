@interface HDOnboardingCompletionEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)objectForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;

@end
