@class NSString, NSArray, SAUIColor, SAUIImageResource;

@interface SAUISash : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAUIImageResource *image;
@property (retain, nonatomic) SAUIColor *textColor;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sash;
+ (id)sashWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
