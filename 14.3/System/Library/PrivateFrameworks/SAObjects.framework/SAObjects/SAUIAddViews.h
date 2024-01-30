@class NSString, NSArray, SASendCommands;

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *dialogPhase;
@property (copy, nonatomic) NSString *displayTarget;
@property (nonatomic) BOOL immersiveExperience;
@property (nonatomic) BOOL mutatingCommand;
@property (retain, nonatomic) SASendCommands *refreshCommand;
@property (nonatomic) BOOL requiresResponse;
@property (nonatomic) BOOL scrollToTop;
@property (nonatomic) BOOL supplemental;
@property (nonatomic) BOOL temporary;
@property (copy, nonatomic) NSArray *views;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addViewsWithDictionary:(id)a0 context:(id)a1;
+ (id)addViews;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
