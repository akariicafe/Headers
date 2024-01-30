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

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
