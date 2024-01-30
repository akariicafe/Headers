@class NSString, NSDictionary, AMSSQLiteConnection;

@interface AMSSQLiteStatement : NSObject <AMSSQLiteBinding> {
    AMSSQLiteStatement *_strongSelf;
}

@property (readonly, nonatomic) AMSSQLiteConnection *connection;
@property (readonly, nonatomic) struct sqlite3_stmt { } *sqlite3_stmt;
@property (readonly, copy, nonatomic) NSDictionary *columnIndexByName;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, copy, nonatomic) NSString *SQL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)step;
- (void)bindNumber:(id)a0 atPosition:(int)a1;
- (int)finalizeStatement;
- (int)clearBindings;
- (void)bindURL:(id)a0 atPosition:(int)a1;
- (void)bindNullableString:(id)a0 atPosition:(int)a1;
- (void)bindArray:(id)a0 atPosition:(int)a1;
- (void)bindFloat:(float)a0 atPosition:(int)a1;
- (void)bindDouble:(double)a0 atPosition:(int)a1;
- (void)bindDictionary:(id)a0 atPosition:(int)a1;
- (void)bindStringCopy:(id)a0 atPosition:(int)a1;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 onConnection:(id)a1;
- (void)bindString:(id)a0 atPosition:(int)a1;
- (void)bindNullAtPosition:(int)a0;
- (void).cxx_destruct;
- (void)bindInt64:(long long)a0 atPosition:(int)a1;
- (void)bindDataCopy:(id)a0 atPosition:(int)a1;
- (void)bindData:(id)a0 atPosition:(int)a1;
- (void)bindDate:(id)a0 atPosition:(int)a1;
- (void)bindInt:(int)a0 atPosition:(int)a1;
- (int)reset;

@end
