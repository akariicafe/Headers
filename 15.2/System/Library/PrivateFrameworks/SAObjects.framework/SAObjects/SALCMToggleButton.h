@class SABaseCommand, NSDictionary, NSString;

@interface SALCMToggleButton : SAAceView

@property (retain, nonatomic) SABaseCommand *commandToToggleToOffMode;
@property (retain, nonatomic) SABaseCommand *commandToToggleToOnMode;
@property (copy, nonatomic) NSDictionary *offIconDynamicImage;
@property (copy, nonatomic) NSString *offTitle;
@property (copy, nonatomic) NSDictionary *onIconDynamicImage;
@property (copy, nonatomic) NSString *onTitle;

+ (id)toggleButton;
+ (id)toggleButtonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
