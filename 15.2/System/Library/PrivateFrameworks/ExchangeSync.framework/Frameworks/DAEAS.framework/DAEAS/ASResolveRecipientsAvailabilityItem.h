@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem

@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (retain, nonatomic) NSString *mergedFreeBusy;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;

@end
