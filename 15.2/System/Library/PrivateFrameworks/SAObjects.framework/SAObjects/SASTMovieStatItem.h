@class NSString, SASTTemplatePercentageRating;

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contentRating;
@property (retain, nonatomic) SASTTemplatePercentageRating *reviewerRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)movieStatItem;
+ (id)movieStatItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
