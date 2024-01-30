@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
