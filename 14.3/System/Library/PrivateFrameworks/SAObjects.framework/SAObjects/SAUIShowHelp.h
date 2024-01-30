@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *text;

+ (id)showHelp;
+ (id)showHelpWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
