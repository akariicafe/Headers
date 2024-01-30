@class NSMutableDictionary, SSURLConnectionResponse, NSArray, NSDictionary, NSError, SSPurchase, NSString;

@interface SSPurchaseResponse : NSObject <SSXPCCoding, NSSecureCoding> {
    NSMutableDictionary *_transactionIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL cancelsPurchaseBatch;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) SSPurchase *purchase;
@property (retain, nonatomic) SSURLConnectionResponse *URLResponse;
@property (copy, nonatomic) NSArray *downloadIdentifiers;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)responseMetrics;
- (id)transactionIdentifierForItemIdentifier:(long long)a0;
- (id)downloadMetadataForItemIdentifier:(long long)a0;
- (id)downloadsMetadata;

@end
