@class NSString;

@interface TSKBooleanFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) NSString *trueString;
@property (readonly, nonatomic) NSString *falseString;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)stringFromBool:(BOOL)a0 locale:(id)a1;
- (id)asBooleanFormat;
- (id)initWithTrueString:(id)a0 falseString:(id)a1;

@end
