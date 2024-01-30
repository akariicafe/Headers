@class NSLocale;

@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (id)objectForKey:(id)a0;
- (unsigned char)_nullLocale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_update:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (void)finalize;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)_prefs;
- (void)_setNullLocale;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
