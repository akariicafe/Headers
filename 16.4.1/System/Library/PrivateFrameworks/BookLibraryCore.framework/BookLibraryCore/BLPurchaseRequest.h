@class NSString, NSSet, NSURL, NSDictionary, NSNumber;

@interface BLPurchaseRequest : BLRequest <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *buyParameters;
@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSURL *permlink;
@property (copy, nonatomic) NSString *permlinkTitle;
@property (nonatomic, getter=isPreOrder) BOOL preOrder;
@property (retain, nonatomic) NSSet *storeIdentifiersToDownload;
@property (nonatomic, getter=isSupplementalContent) BOOL supplementalContent;
@property (nonatomic, getter=isAudiobook) BOOL audiobook;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSDictionary *analyticsInfo;
@property (nonatomic, getter=isRestore) BOOL restore;
@property (nonatomic, getter=shouldSuppressNetworkEvaluatorDialogs) BOOL suppressNetworkEvaluatorDialogs;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (copy, nonatomic) NSString *logUUID;

+ (id)requestWithBuyParameters:(id)a0 storeIdentifier:(id)a1;
+ (id)requestWithPermlink:(id)a0 title:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
