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

- (id)identifier;
- (id)alternatives;
- (id)originalText;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 identifier:(id)a2 isLowConfidence:(BOOL)a3;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 identifier:(id)a2;
- (id)initWithOriginalText:(id)a0 alternatives:(id)a1;
- (unsigned long long)numberOfAlternatives;
- (id)initWithOriginalText:(id)a0 alternatives:(id)a1 identifier:(id)a2;
- (void)noteSelectedAlternativeString:(id)a0;
- (id)description;
- (id)initWithPrimaryString:(id)a0 alternativeStrings:(id)a1 isLowConfidence:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)alternativeAtIndex:(unsigned long long)a0;

@end
