@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *initialView;

+ (id)clearScreen;
+ (id)clearScreenWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
