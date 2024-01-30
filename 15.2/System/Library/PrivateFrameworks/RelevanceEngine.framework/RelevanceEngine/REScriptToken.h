@class NSString;

@interface REScriptToken : NSObject <NSCopying>

@property (readonly, nonatomic) long long line;
@property (readonly, nonatomic) long long column;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned long long type;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1 line:(long long)a2 column:(long long)a3;

@end
