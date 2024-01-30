@class NSLocale;

@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (void)_update:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)finalize;
- (id)description;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (Class)classForCoder;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_prefs;
- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;

@end
