@interface BGAppRefreshTaskRequest : BGTaskRequest

+ (id)_requestFromActivity:(id)a0;
+ (Class)_correspondingTaskClass;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_activity;
- (unsigned long long)hash;

@end
