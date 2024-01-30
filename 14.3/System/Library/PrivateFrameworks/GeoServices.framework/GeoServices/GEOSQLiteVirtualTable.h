@class NSString;

@interface GEOSQLiteVirtualTable : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct sqlite3_module { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; } *module;
@property (readonly, nonatomic) NSString *columnDefinitions;
@property (readonly, nonatomic) unsigned long long rowCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)fetchValueForContext:(struct sqlite3_context { } *)a0 row:(unsigned long long)a1 column:(unsigned long long)a2;

@end
