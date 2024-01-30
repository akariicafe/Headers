@class NSString, ASResolveRecipientsCertificatesItem, ASResolveRecipientsAvailabilityItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) ASResolveRecipientsCertificatesItem *certificates;
@property (retain, nonatomic) ASResolveRecipientsAvailabilityItem *availability;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)description;

@end
