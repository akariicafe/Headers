@class NSString;

@interface SALCMLiveTuneInButton : SAUIButton

@property (copy, nonatomic) NSString *liveTuneInButtonType;

+ (id)liveTuneInButton;
+ (id)liveTuneInButtonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
