@class NSString;

@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *fullScreenEffectType;

+ (id)showFullScreenEffect;
+ (id)showFullScreenEffectWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
