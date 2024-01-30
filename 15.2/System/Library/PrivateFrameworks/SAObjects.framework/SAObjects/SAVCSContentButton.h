@class NSString, NSArray, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSArray *togglePlayPauseCommands;
@property (copy, nonatomic) NSURL *url;

+ (id)contentButton;
+ (id)contentButtonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
