@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding> {
    long long _layoutType;
    unsigned long long _keyboardType;
    NSString *_identifier;
    NSString *_primaryLanguage;
    unsigned long long _flags;
    double _time;
    NSString *_keys;
    NSString *_ukeys;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long keyboardLayoutType;
@property (readonly) unsigned long long keyboardType;
@property (readonly, copy) NSString *keyboardLayoutIdentifier;
@property (readonly, copy) NSString *primaryLanguage;
@property (readonly) unsigned long long flags;
@property (readonly) double timestamp;
@property (readonly, copy) NSString *characters;
@property (readonly, copy) NSString *charactersIgnoringModifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithKeyboardLayoutType:(long long)a0 keyboardType:(unsigned long long)a1 identifier:(id)a2 primaryLanguage:(id)a3 flags:(unsigned long long)a4 timestamp:(double)a5 characters:(id)a6 charactersIgnoringModifiers:(id)a7;

@end
