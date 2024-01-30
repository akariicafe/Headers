@interface IMClassicTapback : IMTapback

+ (BOOL)isValidAssociatedMessageType:(long long)a0;
+ (BOOL)isValidRepresentation:(id)a0;

- (id)actionString;
- (id)initWithAssociatedMessageType:(long long)a0;

@end
