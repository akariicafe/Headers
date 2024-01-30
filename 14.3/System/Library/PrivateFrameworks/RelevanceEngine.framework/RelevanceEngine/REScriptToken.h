@class NSString;

@interface REScriptToken : NSObject <NSCopying>

@property (readonly, nonatomic) long long line;
@property (readonly, nonatomic) long long column;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1 line:(long long)a2 column:(long long)a3;

@end
