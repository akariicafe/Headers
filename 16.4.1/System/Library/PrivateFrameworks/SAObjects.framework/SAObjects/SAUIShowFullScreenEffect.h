@class NSString;

@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *fullScreenEffectType;

+ (id)showFullScreenEffect;
+ (id)showFullScreenEffectWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
