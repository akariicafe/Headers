@class NSString, SAUIDecoratedText, SAUIAppPunchOut, NSNumber;
@protocol SAClientBoundCommand;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SAClientBoundCommand> command;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValueAnnotation;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSNumber *selected;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)answerProperty;
+ (id)answerPropertyWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
