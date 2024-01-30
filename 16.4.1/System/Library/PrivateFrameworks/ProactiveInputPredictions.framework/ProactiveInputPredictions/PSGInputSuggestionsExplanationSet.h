@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_stringFromExplanation:(unsigned char)a0;
+ (id)stringFromExplanationCode:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithSet:(id)a0;
- (void).cxx_destruct;
- (void)_pushExplanationCode:(unsigned short)a0 namespaceId:(unsigned short)a1;
- (void)enumerateExplanationCodeWithBlock:(id /* block */)a0;
- (BOOL)hasContactsServingError;
- (BOOL)hasPETLoggingData;
- (BOOL)hasTriggeringXPCTimeout;
- (BOOL)isEqualToExplanationSet:(id)a0;
- (void)pushInternalExplanationCode:(unsigned int)a0;
- (void)pushPortraitExplanationCode:(unsigned char)a0;

@end
