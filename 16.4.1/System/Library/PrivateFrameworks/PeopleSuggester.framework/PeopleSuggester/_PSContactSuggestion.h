@class NSSet, NSString, NSURL, NSArray, NSDictionary, CNContact;

@interface _PSContactSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double regularityScore;
@property (nonatomic) unsigned long long totalFrequency;
@property (copy, nonatomic) NSSet *daysInteracted;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *messagesGroupIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSArray *groupRecipients;
@property (copy, nonatomic) NSDictionary *handleAndAppFrequencies;
@property (copy, nonatomic) NSDictionary *handleAndAppRegularityScores;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) double peopleWidgetScore;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *suggestedHandle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 andScore:(double)a1;

@end
