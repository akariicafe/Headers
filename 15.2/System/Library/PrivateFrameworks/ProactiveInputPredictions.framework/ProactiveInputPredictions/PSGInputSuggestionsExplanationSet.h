@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)stringFromExplanationCode:(unsigned int)a0;
+ (id)_stringFromExplanation:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (unsigned long long)hash;
- (void)enumerateExplanationCodeWithBlock:(id /* block */)a0;
- (void)_pushExplanationCode:(unsigned short)a0 namespaceId:(unsigned short)a1;
- (void)pushInternalExplanationCode:(unsigned int)a0;
- (void)pushPortraitExplanationCode:(unsigned char)a0;
- (BOOL)hasPETLoggingData;
- (BOOL)hasContactsServingError;
- (BOOL)hasTriggeringXPCTimeout;
- (BOOL)isEqualToExplanationSet:(id)a0;

@end
