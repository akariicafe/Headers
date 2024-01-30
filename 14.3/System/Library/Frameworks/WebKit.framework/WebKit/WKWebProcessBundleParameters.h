@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _parameters;
}

- (void).cxx_destruct;
- (void)setParametersForKeyWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;
- (id)description;
- (id).cxx_construct;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;

@end
