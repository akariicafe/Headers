@class NSString, NSArray;

@interface NSTextAlternatives : NSObject <NSSecureCoding> {
    NSString *_primaryString;
    NSArray *_alternativeStrings;
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isLowConfidence;
@property (readonly) NSString *primaryString;
@property (readonly) NSArray *alternativeStrings;

- (id)alternatives;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)originalText;
- (id)description;
- (id)alternativeAtIndex:(unsigned long long)a0;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 isLowConfidence:(BOOL)a2;
- (id)initWithOriginalText:(id)a0 alternatives:(id)a1;
- (id)initWithOriginalText:(id)a0 alternatives:(id)a1 identifier:(id)a2;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 identifier:(id)a2;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 identifier:(id)a2 isLowConfidence:(BOOL)a3;
- (void)noteSelectedAlternativeString:(id)a0;
- (unsigned long long)numberOfAlternatives;

@end
