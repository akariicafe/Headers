@class NSString;

@interface SXJSONObjectMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>

@property (readonly, nonatomic) Class objectClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObjectClass:(Class)a0;
- (Class)classForObject:(id)a0 specVersion:(id)a1;

@end
