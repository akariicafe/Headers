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

- (void).cxx_destruct;
- (id)description;

@end
