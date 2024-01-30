@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *text;

+ (id)showHelpWithDictionary:(id)a0 context:(id)a1;
+ (id)showHelp;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
