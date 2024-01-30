@interface VCWorkflowChange : VCDatabaseChange

@property (readonly, nonatomic) long long syncHash;

+ (int)messageType;
+ (Class)recordClass;
+ (unsigned long long)databaseObjectType;
+ (long long)syncHashForRecord:(id)a0;

@end
