@class NPSDomainAccessor;

@interface SMUNPSDomainAccessor : NSObject {
    NPSDomainAccessor *_domainAccessor;
}

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)synchronize;
- (id)initWithDomain:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;

@end
