@class NSData, NSString;

@interface PQLRawInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly, nonatomic) NSData *sql;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)rawInjection:(const char *)a0 length:(unsigned long long)a1;

- (int)bindWithStatement:(struct sqlite3_stmt { } *)a0 startingAtIndex:(int)a1;
- (id)initWithUTF8String:(const char *)a0 length:(unsigned long long)a1;

@end
