@class NSArray, NSString;

@interface UIDictationMultilingualResults : NSObject

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSString *dominantLanguage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhrases:(id)a0 dominantLanguage:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
