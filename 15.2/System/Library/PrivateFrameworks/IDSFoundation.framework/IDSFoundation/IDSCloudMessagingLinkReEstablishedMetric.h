@class NSString, NSDictionary, PBCodable;
@protocol NSCopying;

@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, nonatomic) double inactiveTime;
@property (readonly, nonatomic) unsigned long long linkType;
@property (readonly, nonatomic) unsigned long long priorLinkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInactiveTime:(double)a0 linkType:(unsigned long long)a1 priorLinkType:(unsigned long long)a2;

@end
