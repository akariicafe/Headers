@class NSString;

@interface MOWebDomain : NSObject

@property (readonly) NSString *domain;

+ (BOOL)compareDomain:(id)a0 withDomainPattern:(id)a1 outExactMatch:(BOOL *)a2;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;

@end
