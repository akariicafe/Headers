@class NSString;

@interface NPPurchaseContext : NSObject {
    void /* unknown type, empty encoding */ conversionLocation;
    void /* unknown type, empty encoding */ sourceChannelID;
    void /* unknown type, empty encoding */ productID;
    void /* unknown type, empty encoding */ purchaseID;
    void /* unknown type, empty encoding */ articleID;
    void /* unknown type, empty encoding */ issueID;
    void /* unknown type, empty encoding */ feedID;
    void /* unknown type, empty encoding */ sectionID;
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ qToken;
    void /* unknown type, empty encoding */ purchaseSessionID;
    void /* unknown type, empty encoding */ creativeID;
    void /* unknown type, empty encoding */ campaignID;
    void /* unknown type, empty encoding */ campaignType;
}

@property (nonatomic, copy) NSString *conversionLocation;
@property (nonatomic, copy) NSString *sourceChannelID;
@property (nonatomic, copy) NSString *productID;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic) void /* unknown type, empty encoding */ purchaseType;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, copy) NSString *issueID;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic) void /* unknown type, empty encoding */ parentFeedType;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic) void /* unknown type, empty encoding */ groupType;
@property (nonatomic, copy) NSString *qToken;
@property (nonatomic, copy) NSString *purchaseSessionID;
@property (nonatomic) void /* unknown type, empty encoding */ arrivedFromAd;
@property (nonatomic) void /* unknown type, empty encoding */ webAccessOptIn;
@property (nonatomic, copy) NSString *creativeID;
@property (nonatomic, copy) NSString *campaignID;
@property (nonatomic, copy) NSString *campaignType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProductID:(id)a0 purchaseID:(id)a1 purchaseType:(long long)a2 sourceChannelID:(id)a3 purchaseSessionID:(id)a4 conversionLocation:(id)a5 articleID:(id)a6 issueID:(id)a7 feedID:(id)a8 parentFeedType:(long long)a9 sectionID:(id)a10 groupID:(id)a11 groupType:(long long)a12 webAccessOptIn:(BOOL)a13 arrivedFromAd:(BOOL)a14 qToken:(id)a15 creativeID:(id)a16 campaignID:(id)a17 campaignType:(id)a18;

@end
