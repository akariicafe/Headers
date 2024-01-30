@class NSString;

@interface QLImageItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedOutputClasses;
+ (id)animatableContentTypes;

@end
