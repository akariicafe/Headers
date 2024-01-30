@class NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsCertificatesItem : ASItem

@property (retain, nonatomic) NSMutableArray *mCertificates;
@property (retain, nonatomic) NSNumber *certCount;
@property (retain, nonatomic) NSNumber *recipientCount;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (readonly, nonatomic) NSArray *certificates;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)addCertificateString:(id)a0;

@end
