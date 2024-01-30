@class NSString;

@interface HDSQLiteVFS : NSObject {
    struct sqlite3_vfs { int x0; int x1; int x2; struct sqlite3_vfs *x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; } *_baseVFS;
    struct sqlite3_vfs { int x0; int x1; int x2; struct sqlite3_vfs *x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; } *_customVFS;
}

@property (readonly, copy, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)openWithPath:(const char *)a0 file:(struct sqlite3_file { struct sqlite3_io_methods *x0; } *)a1 flags:(int)a2 outFlags:(int *)a3;

@end
