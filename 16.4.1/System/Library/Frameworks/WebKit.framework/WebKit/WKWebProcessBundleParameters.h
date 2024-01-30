@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _parameters;
}

- (id).cxx_construct;
- (id)valueForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (id)description;
- (void)setParametersForKeyWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
