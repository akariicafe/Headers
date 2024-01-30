@class NSString, CDMSpanValue;

@interface CDMMatchingSpan : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) CDMSpanValue *value;
@property (readonly, nonatomic) long long startCharIndex;
@property (readonly, nonatomic) long long endCharIndex;
@property (readonly, nonatomic) long long startTokenIndex;
@property (readonly, nonatomic) long long endTokenIndex;

- (id)toDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLabel:(id)a0 input:(id)a1 value:(id)a2 startCharIndex:(long long)a3 endCharIndex:(long long)a4 startTokenIndex:(long long)a5 endTokenIndex:(long long)a6;

@end
