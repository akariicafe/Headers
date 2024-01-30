@class NSString, NSArray, NSURL, RLMSchema, NSData;

@interface RLMRealmConfiguration : NSObject <NSCopying> {
    struct Config { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } path; struct BinaryData { char *m_data; unsigned long long m_size; } realm_data; struct vector<char, std::__1::allocator<char> > { char *__begin_; char *__end_; struct __compressed_pair<char *, std::__1::allocator<char> > { char *__value_; } __end_cap_; } encryption_key; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } fifo_files_fallback_path; BOOL in_memory; unsigned char schema_mode; struct Optional<realm::Schema> { union { struct Schema { struct ObjectSchema *__begin_; struct ObjectSchema *__end_; struct __compressed_pair<realm::ObjectSchema *, std::__1::allocator<realm::ObjectSchema> > { struct ObjectSchema *__value_; } __end_cap_; } m_value; char m_null_state; } ; BOOL m_engaged; } schema; unsigned long long schema_version; struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> { struct __value_func<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> *__f_; } __f_; } migration_function; struct function<void (std::__1::shared_ptr<realm::Realm>)> { struct __value_func<void (std::__1::shared_ptr<realm::Realm>)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<void (std::__1::shared_ptr<realm::Realm>)> *__f_; } __f_; } initialization_function; struct function<bool (unsigned long long, unsigned long long)> { struct __value_func<bool (unsigned long long, unsigned long long)> { struct type { unsigned char __lx[24]; } __buf_; struct __base<bool (unsigned long long, unsigned long long)> *__f_; } __f_; } should_compact_on_launch_function; BOOL cache; BOOL disable_format_upgrade; BOOL automatic_change_notifications; struct Optional<unsigned long> { union { unsigned long long m_value; char m_null_state; } ; BOOL m_engaged; } execution_context; struct shared_ptr<realm::SyncConfig> { struct SyncConfig *__ptr_; struct __shared_weak_count *__cntrl_; } sync_config; BOOL force_sync_history; struct function<std::__1::shared_ptr<realm::AuditInterface> ()> { struct __value_func<std::__1::shared_ptr<realm::AuditInterface> ()> { struct type { unsigned char __lx[24]; } __buf_; struct __base<std::__1::shared_ptr<realm::AuditInterface> ()> *__f_; } __f_; } audit_factory; } _config;
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

+ (id)rawDefaultConfiguration;
+ (void)setDefaultConfiguration:(id)a0;
+ (void)resetRealmConfigurationState;
+ (id)defaultConfiguration;
+ (id)wf_configurationWithRealmURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)syncConfiguration;
- (void)setCustomSchemaWithoutCopying:(id)a0;
- (id)description;
- (id).cxx_construct;
- (unsigned char)schemaMode;
- (struct Config { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct BinaryData { char *x0; unsigned long long x1; } x1; struct vector<char, std::__1::allocator<char> > { char *x0; char *x1; struct __compressed_pair<char *, std::__1::allocator<char> > { char *x0; } x2; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; BOOL x4; unsigned char x5; struct Optional<realm::Schema> { union { struct Schema { struct ObjectSchema *x0; struct ObjectSchema *x1; struct __compressed_pair<realm::ObjectSchema *, std::__1::allocator<realm::ObjectSchema> > { struct ObjectSchema *x0; } x2; } x0; char x1; } x0; BOOL x1; } x6; unsigned long long x7; struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> { struct __value_func<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> { struct type { unsigned char x0[24]; } x0; struct __base<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> *x1; } x0; } x8; struct function<void (std::__1::shared_ptr<realm::Realm>)> { struct __value_func<void (std::__1::shared_ptr<realm::Realm>)> { struct type { unsigned char x0[24]; } x0; struct __base<void (std::__1::shared_ptr<realm::Realm>)> *x1; } x0; } x9; struct function<bool (unsigned long long, unsigned long long)> { struct __value_func<bool (unsigned long long, unsigned long long)> { struct type { unsigned char x0[24]; } x0; struct __base<bool (unsigned long long, unsigned long long)> *x1; } x0; } x10; BOOL x11; BOOL x12; BOOL x13; struct Optional<unsigned long> { union { unsigned long long x0; char x1; } x0; BOOL x1; } x14; struct shared_ptr<realm::SyncConfig> { struct SyncConfig *x0; struct __shared_weak_count *x1; } x15; BOOL x16; struct function<std::__1::shared_ptr<realm::AuditInterface> ()> { struct __value_func<std::__1::shared_ptr<realm::AuditInterface> ()> { struct type { unsigned char x0[24]; } x0; struct __base<std::__1::shared_ptr<realm::AuditInterface> ()> *x1; } x0; } x17; } *)config;
- (void)setSchemaMode:(unsigned char)a0;

@end
