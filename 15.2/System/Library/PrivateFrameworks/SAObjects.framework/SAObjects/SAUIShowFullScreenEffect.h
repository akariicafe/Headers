@class NSString;

@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *fullScreenEffectType;

+ (id)showFullScreenEffect;
+ (id)showFullScreenEffectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
