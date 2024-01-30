@class SAIntentGroupProtobufMessage, NSString, NSArray, NSNumber;
@protocol SAServerBoundCommand;

@interface SAIntentGroupSnippet : SAUISnippet

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (retain, nonatomic) id<SAServerBoundCommand> processSynapseFlowCommand;
@property (copy, nonatomic) NSArray *snippetTemplates;
@property (nonatomic) BOOL widgetAllowed;
@property (copy, nonatomic) NSNumber *widgetIndex;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
