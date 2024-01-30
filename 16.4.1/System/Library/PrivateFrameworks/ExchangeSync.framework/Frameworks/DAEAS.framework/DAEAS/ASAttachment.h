@class NSString, NSNumber, NSURL;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSNumber *method;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *contentLocation;
@property (copy, nonatomic) NSNumber *isInline;
@property (copy, nonatomic) NSNumber *hasBase64Transfer;
@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) NSURL *localPath;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isMostDefinitelyBase64ed;
- (void)appendActiveSyncDataForTask:(id)a0 toData:(id)a1;
- (void)setPercentEscapedName:(id)a0;

@end
