@class NSString, NSArray;

@interface UIDictationMultilingualString : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *dominantLanguage;
@property (retain, nonatomic) id correctionIdentifier;
@property (retain, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSArray *phrases;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 forLanguage:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
