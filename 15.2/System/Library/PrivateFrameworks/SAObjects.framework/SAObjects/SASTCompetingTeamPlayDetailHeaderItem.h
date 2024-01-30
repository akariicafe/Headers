@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *firstTeam;
@property (retain, nonatomic) SAUIDecoratedText *secondTeam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)competingTeamPlayDetailHeaderItem;
+ (id)competingTeamPlayDetailHeaderItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
