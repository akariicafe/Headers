@class NSString;

@interface SSUIServiceRequest : NSObject <BSXPCCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entitlement;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end
