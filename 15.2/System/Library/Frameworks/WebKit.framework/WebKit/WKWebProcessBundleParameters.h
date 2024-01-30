@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _parameters;
}

- (void)setParameter:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)description;
- (void)setParametersForKeyWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;

@end
