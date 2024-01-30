@class NSString, NSURL, NSNumber, SAUIImageResource;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSNumber *imageInverted;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectLine;
+ (id)objectLineWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
