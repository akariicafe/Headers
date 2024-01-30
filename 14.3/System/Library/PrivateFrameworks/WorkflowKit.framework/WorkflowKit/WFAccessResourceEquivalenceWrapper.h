@class WFAccessResource;

@interface WFAccessResourceEquivalenceWrapper : NSObject

@property (readonly, nonatomic) WFAccessResource *accessResource;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccessResource:(id)a0;

@end
