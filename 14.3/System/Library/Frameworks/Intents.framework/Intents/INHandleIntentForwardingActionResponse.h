@class NSData, NSSet, INIntentResponse;

@interface INHandleIntentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) INIntentResponse *intentResponse;
@property (readonly, nonatomic) NSData *launchContextActivityData;
@property (readonly, nonatomic) NSSet *cacheItems;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithIntentResponse:(id)a0 launchContextActivityData:(id)a1 cacheItems:(id)a2 error:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
