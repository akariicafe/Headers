@class NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsCertificatesItem : ASItem

@property (retain, nonatomic) NSMutableArray *mCertificates;
@property (retain, nonatomic) NSNumber *certCount;
@property (retain, nonatomic) NSNumber *recipientCount;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (readonly, nonatomic) NSArray *certificates;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void).cxx_destruct;
- (void)addCertificateString:(id)a0;

@end
