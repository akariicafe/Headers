@class NSArray;

@interface APPCBlacklistReasonCharacteristic : NSObject <APPCPromotableBlacklistReasonCharacteristic> {
    void /* unknown type, empty encoding */ globalCategories;
    void /* unknown type, empty encoding */ globalKeywords;
    void /* unknown type, empty encoding */ campaignCategories;
    void /* unknown type, empty encoding */ campaignKeywords;
}

@property (nonatomic, copy) NSArray *globalCategories;
@property (nonatomic, copy) NSArray *globalKeywords;
@property (nonatomic, copy) NSArray *campaignCategories;
@property (nonatomic, copy) NSArray *campaignKeywords;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGlobalCategories:(id)a0 globalKeywords:(id)a1 campaignCategories:(id)a2 campaignKeywords:(id)a3;

@end
