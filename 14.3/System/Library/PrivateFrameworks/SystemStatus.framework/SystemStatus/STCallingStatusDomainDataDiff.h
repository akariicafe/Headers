@class NSString, STActivityAttributionCatalogDiff;

@interface STCallingStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STActivityAttributionCatalogDiff *attributionCatalogDiff;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (id)initWithAttributionCatalogDiff:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)applyToMutableData:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dataByApplyingToData:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
