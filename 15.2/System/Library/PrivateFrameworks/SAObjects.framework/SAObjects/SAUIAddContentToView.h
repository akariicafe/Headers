@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *targetViewId;

+ (id)addContentToView;
+ (id)addContentToViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
