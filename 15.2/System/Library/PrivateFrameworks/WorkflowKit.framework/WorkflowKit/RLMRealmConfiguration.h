@class NSString, NSArray, NSURL, RLMSchema, NSData;

@interface RLMRealmConfiguration : NSObject <NSCopying> {
    struct Config { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } path; struct BinaryData { char *m_data; unsigned long long m_size; } realm_data; struct vector<char, std::allocator<char>> { char *__begin_; char *__end_; struct __compressed_pair<char *, std::allocator<char>> { char *__value_; } __end_cap_; } encryption_key; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } fifo_files_fallback_path; BOOL in_memory; unsigned char schema_mode; struct Optional<realm::Schema> { union { struct Schema { struct ObjectSchema *__begin_; struct ObjectSchema *__end_; struct __compressed_pair<realm::ObjectSchema *, std::allocator<realm::ObjectSchema>> { struct ObjectSchema *__value_; } __end_cap_; } m_value; char m_null_state; } ; BOOL m_engaged; } schema; unsigned long long schema_version; struct function<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)> { struct __value_func<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } migration_function; struct function<void (std::shared_ptr<realm::Realm>)> { struct __value_func<void (std::shared_ptr<realm::Realm>)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } initialization_function; struct function<bool (unsigned long long, unsigned long long)> { struct __value_func<bool (unsigned long long, unsigned long long)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } should_compact_on_launch_function; BOOL cache; BOOL disable_format_upgrade; BOOL automatic_change_notifications; struct Optional<unsigned long> { union { unsigned long long m_value; char m_null_state; } ; BOOL m_engaged; } execution_context; struct shared_ptr<realm::SyncConfig> { struct SyncConfig *__ptr_; struct __shared_weak_count *__cntrl_; } sync_config; BOOL force_sync_history; struct function<std::shared_ptr<realm::AuditInterface> ()> { struct __value_func<std::shared_ptr<realm::AuditInterface> ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } audit_factory; } _config;
}

@property (nonatomic) BOOL cache;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL disableFormatUpgrade;
@property (copy, nonatomic) RLMSchema *customSchema;
@property (copy, nonatomic) NSString *pathOnDisk;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *inMemoryIdentifier;
@property (copy, nonatomic) NSData *encryptionKey;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) unsigned long long schemaVersion;
@property (copy, nonatomic) id /* block */ migrationBlock;
@property (nonatomic) BOOL deleteRealmIfMigrationNeeded;
@property (copy, nonatomic) id /* block */ shouldCompactOnLaunch;
@property (copy, nonatomic) NSArray *objectClasses;

+ (void)setDefaultConfiguration:(id)a0;
+ (id)defaultConfiguration;
+ (id)rawDefaultConfiguration;
+ (void)resetRealmConfigurationState;
+ (id)wf_configurationWithRealmURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void *)config;
- (unsigned char)schemaMode;
- (void)setSchemaMode:(unsigned char)a0;
- (void)setCustomSchemaWithoutCopying:(id)a0;
- (id)syncConfiguration;

@end
