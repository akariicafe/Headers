@class NSString;

@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *parameterName;

+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;

- (id)initWithIntent:(id)a0 parameterName:(id)a1;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
