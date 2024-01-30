@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_tasksByType;
    NSMutableDictionary *_mutableTasksByType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasTasks;

+ (id)descriptionForTaskType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initEmpty;
- (void)enumerateScopedTasksWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)invalidRecordScopedIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionFromTasksByType:(id)a0;
- (id)invalidRecordIdentifiers;
- (void)addTask:(long long)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)enumerateTasksWithBlock:(id /* block */)a0;
- (id)description;
- (void)_commitTasks;
- (void).cxx_destruct;

@end
