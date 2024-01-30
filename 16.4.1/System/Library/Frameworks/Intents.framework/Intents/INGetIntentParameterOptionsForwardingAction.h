@class NSString;

@interface INGetIntentParameterOptionsForwardingAction : INIntentForwardingAction

@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) NSString *searchTerm;

+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 parameterName:(id)a1 searchTerm:(id)a2;

@end
