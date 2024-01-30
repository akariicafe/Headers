@class NSDictionary, NSString;

@interface APPCAppStoreSupplementalContext : NSObject <APPCPromotableAppStoreSupplementalContext> {
    void /* unknown type, empty encoding */ impressionCap;
    void /* unknown type, empty encoding */ clickCap;
    void /* unknown type, empty encoding */ storeFront;
    void /* unknown type, empty encoding */ storeFrontLocale;
}

@property (nonatomic, readonly) NSDictionary *impressionCap;
@property (nonatomic, readonly) NSDictionary *clickCap;
@property (nonatomic, readonly) NSString *storeFront;
@property (nonatomic, readonly) NSString *storeFrontLocale;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)a0;

@end
