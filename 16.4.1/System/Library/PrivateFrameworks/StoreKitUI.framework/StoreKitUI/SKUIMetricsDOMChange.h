@class NSDictionary;

@interface SKUIMetricsDOMChange : NSObject <NSCopying>

@property (nonatomic) double buildStartTime;
@property (nonatomic) double buildEndTime;
@property (nonatomic) double renderStartTime;
@property (nonatomic) double renderEndTime;
@property (nonatomic, getter=isFromDeferredMessage) BOOL fromDeferredMessage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithReportDomBuildTimesMessagePayload:(id)a0;

@end
