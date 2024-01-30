@interface SGContactEntity : SGEntity

+ (id)contactEntityFromEntity:(id)a0;
+ (id)contactEntityWithTitle:(id)a0 duplicateKey:(id)a1 recordId:(id)a2 masterEntityId:(long long)a3;

- (id)initWithDuplicateKey:(id)a0 recordId:(id)a1 masterEntityId:(long long)a2 title:(id)a3;

@end
