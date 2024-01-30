@class NSSet, NSArray, NSString;

@interface NUPattern : NSObject

@property (readonly, nonatomic) NSSet *tokens;
@property (readonly, nonatomic) BOOL isFixedOrder;
@property (readonly, nonatomic) NSArray *shortestMatch;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSString *stringRepresentation;

+ (id)patternWithString:(id)a0 error:(out id *)a1;
+ (BOOL)scanString:(id)a0 intoPattern:(out id *)a1 error:(out id *)a2;

- (BOOL)match:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isDetermisitic;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;

@end
