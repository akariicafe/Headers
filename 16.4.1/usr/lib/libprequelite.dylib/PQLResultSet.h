@class PQLStatement, NSSet, PQLConnection, NSError;

@interface PQLResultSet : NSObject <PQLEnumeration> {
    PQLStatement *_stmt;
    Class _objectsClass;
    SEL _objectsClassInitializer;
    BOOL _hasValuable;
    id /* block */ _objectsConstructor;
    id _lastEnumeratedObject;
    BOOL _inTransaction;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long rowNumber;
@property (readonly, nonatomic) unsigned long long columns;
@property (readonly, nonatomic) PQLConnection *db;
@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;
@property (retain, nonatomic) NSSet *defaultUnarchivingAllowedClasses;

- (id)nextObject;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)next;
- (BOOL)boolAtIndex:(int)a0;
- (id)stringAtIndex:(int)a0;
- (int)intAtIndex:(int)a0;
- (void)dealloc;
- (long long)integerAtIndex:(int)a0;
- (id)objectAtIndex:(int)a0;
- (void)close;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)columnNameAtIndex:(int)a0;
- (id)description;
- (id)dataAtIndex:(int)a0;
- (double)doubleAtIndex:(int)a0;
- (void).cxx_destruct;
- (id)numberAtIndex:(int)a0;
- (BOOL)_next:(BOOL)a0;
- (id)dateAtIndex:(int)a0;
- (id)enumerateObjectsOfClass:(Class)a0;
- (unsigned long long)unsignedIntegerAtIndex:(int)a0;
- (unsigned long long)unsignedLongLongAtIndex:(int)a0;
- (id)object:(id /* block */)a0;
- (id)enumerateObjects:(id /* block */)a0;
- (id)objectOfClass:(Class)a0;
- (float)floatAtIndex:(int)a0;
- (char)charAtIndex:(int)a0;
- (long long)longAtIndex:(int)a0;
- (long long)longLongAtIndex:(int)a0;
- (id)objectOfClass:(Class)a0 atIndex:(int)a1;
- (id)unarchivedObjectOfClass:(Class)a0 atIndex:(int)a1;
- (id)unarchivedObjectOfClasses:(id)a0 atIndex:(int)a1;
- (unsigned int)unsignedIntAtIndex:(int)a0;
- (unsigned long long)unsignedLongAtIndex:(int)a0;
- (id)uuidAtIndex:(int)a0;
- (const char *)UTF8StringAtIndex:(int)a0;
- (id)archivedObjectOfClass:(Class)a0 atIndex:(int)a1;
- (id)archivedObjectOfClasses:(id)a0 atIndex:(int)a1;
- (id)dataAtIndex:(int)a0 noCopy:(BOOL)a1;
- (id)enumerateObjectsOfClass:(Class)a0 initializer:(SEL)a1;
- (id)initWithStatement:(id)a0 usingDatabase:(id)a1;
- (BOOL)isNullAtIndex:(int)a0;
- (id)objectOfClass:(Class)a0 initializer:(SEL)a1;
- (id)onlyObject:(id /* block */)a0;
- (id)onlyObjectOfClass:(Class)a0;
- (id)onlyObjectOfClass:(Class)a0 initializer:(SEL)a1;
- (id)plistAtIndex:(int)a0;
- (short)shortAtIndex:(int)a0;
- (unsigned char)unsignedCharAtIndex:(int)a0;
- (unsigned short)unsignedShortAtIndex:(int)a0;

@end
