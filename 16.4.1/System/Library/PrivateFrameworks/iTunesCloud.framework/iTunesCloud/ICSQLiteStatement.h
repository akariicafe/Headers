@class NSString, NSDictionary, ICSQLiteConnection;

@interface ICSQLiteStatement : NSObject <ICSQLiteBinding> {
    ICSQLiteStatement *_strongSelf;
}

@property (readonly, nonatomic) ICSQLiteConnection *connection;
@property (readonly, nonatomic) struct sqlite3_stmt { } *sqlite3_stmt;
@property (readonly, copy, nonatomic) NSDictionary *columnIndexByName;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, copy, nonatomic) NSString *SQL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindInt64:(long long)a0 atPosition:(int)a1;
- (void)bindData:(id)a0 atPosition:(int)a1;
- (int)step;
- (void)bindFloat:(float)a0 atPosition:(int)a1;
- (void)bindNullAtPosition:(int)a0;
- (void)bindNumber:(id)a0 atPosition:(int)a1;
- (void)bindDouble:(double)a0 atPosition:(int)a1;
- (void)bindDataCopy:(id)a0 atPosition:(int)a1;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 connection:(id)a1;
- (int)clearBindings;
- (void)bindInt:(int)a0 atPosition:(int)a1;
- (void)bindStringCopy:(id)a0 atPosition:(int)a1;
- (void).cxx_destruct;
- (void)bindString:(id)a0 atPosition:(int)a1;
- (int)reset;
- (int)finalizeStatement;

@end
