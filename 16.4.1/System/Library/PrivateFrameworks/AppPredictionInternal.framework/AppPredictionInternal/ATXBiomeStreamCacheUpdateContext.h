@class NSMutableDictionary;

@interface ATXBiomeStreamCacheUpdateContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *currentClientModelCacheCreationDatesByClientModelId;
@property (retain, nonatomic) NSMutableDictionary *previousClientModelCacheAgesByClientModelId;
@property (retain, nonatomic) NSMutableDictionary *currentBlendingModelCacheCreationDatesByConsumerSubType;
@property (retain, nonatomic) NSMutableDictionary *previousBlendingModelCacheAgesByConsumerSubType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)cacheAgeForPreviousBlendingUICacheUpdateForConsumerSubType:(unsigned char)a0;
- (id)cacheAgeForPreviousClientModelCacheWithClientModelId:(id)a0;
- (id)initWithCurrentClientModelCacheCreationDates:(id)a0 previousClientModelCacheAges:(id)a1 currentBlendingModelCacheCreationDates:(id)a2 previousBlendingModelCacheAges:(id)a3;
- (BOOL)isEqualToATXBiomeStreamCacheUpdateContext:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end
