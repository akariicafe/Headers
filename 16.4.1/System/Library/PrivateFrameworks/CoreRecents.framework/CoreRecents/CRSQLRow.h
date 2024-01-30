@interface CRSQLRow : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

+ (int)enumerateRowsInStatement:(struct sqlite3_stmt { } *)a0 usingBlock:(id /* block */)a1;
+ (int)step:(struct sqlite3_stmt { } *)a0;
+ (id)objectAtIndex:(int)a0 statement:(struct sqlite3_stmt { } *)a1;
+ (id)dataAtIndex:(int)a0 copyBytes:(BOOL)a1 statement:(struct sqlite3_stmt { } *)a2;
+ (id)numberWithDoubleAtIndex:(int)a0 statement:(struct sqlite3_stmt { } *)a1;
+ (id)stringAtIndex:(int)a0 statement:(struct sqlite3_stmt { } *)a1;
+ (id)numberWithIntegerAtIndex:(int)a0 statement:(struct sqlite3_stmt { } *)a1;
+ (id)rowWithStatement:(struct sqlite3_stmt { } *)a0;

- (id)initWithStatement:(struct sqlite3_stmt { } *)a0;
- (id)stringAtIndex:(int)a0;
- (id)objectAtIndex:(int)a0;
- (id)dataAtIndex:(int)a0 copyBytes:(BOOL)a1;
- (id)numberWithDoubleAtIndex:(int)a0;
- (id)numberWithIntegerAtIndex:(int)a0;

@end
