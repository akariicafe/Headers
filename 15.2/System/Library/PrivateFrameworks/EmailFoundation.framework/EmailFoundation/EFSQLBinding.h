@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>

@property (readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindingWithData:(id)a0;
+ (id)bindingWithDouble:(double)a0;
+ (id)bindingWithInt64:(long long)a0;
+ (id)bindingWithString:(id)a0;
+ (id)nullBinding;

- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;
- (void)bindToStatement:(id)a0 usingIndex:(unsigned long long)a1;
- (void)bindToStatement:(id)a0 usingName:(id)a1;

@end
