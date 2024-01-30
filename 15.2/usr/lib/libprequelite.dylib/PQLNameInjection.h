@class NSData, NSString;

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly, nonatomic) NSData *sql;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameWithString:(id)a0;
+ (id)_appendString:(id)a0 toInjection:(id)a1;
+ (id)nameWithPrefix:(id)a0 suffix:(id)a1;

- (id)initWithString:(id)a0;
- (id)nameByAddingSuffix:(id)a0;
- (int)bindWithStatement:(struct sqlite3_stmt { } *)a0 startingAtIndex:(int)a1;

@end
