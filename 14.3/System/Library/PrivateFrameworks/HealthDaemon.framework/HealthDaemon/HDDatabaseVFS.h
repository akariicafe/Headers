@class NSString;

@interface HDDatabaseVFS : HDSQLiteVFS

@property (copy, nonatomic) NSString *protectedDatabaseName;

- (void).cxx_destruct;
- (int)openWithPath:(const char *)a0 file:(struct sqlite3_file { struct sqlite3_io_methods *x0; } *)a1 flags:(int)a2 outFlags:(int *)a3;

@end
