@class NSArray, NSString;

@interface UIDictationMultilingualResults : NSObject

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSString *dominantLanguage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPhrases:(id)a0 dominantLanguage:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
