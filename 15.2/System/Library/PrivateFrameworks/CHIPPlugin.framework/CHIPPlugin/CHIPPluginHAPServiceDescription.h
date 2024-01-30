@class NSString;

@interface CHIPPluginHAPServiceDescription : HMFObject

@property (readonly) NSString *serviceType;
@property (readonly) SEL serviceSelector;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 selectorString:(id)a1;

@end
