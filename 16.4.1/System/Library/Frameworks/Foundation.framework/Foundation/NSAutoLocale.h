@class NSLocale;

@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (void)_setDoesNotRequireSpecialCaseHandling;
- (void)encodeWithCoder:(id)a0;
- (id)_prefForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (Class)classForCoder;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (void)dealloc;
- (id)description;
- (void)_update:(id)a0;

@end
