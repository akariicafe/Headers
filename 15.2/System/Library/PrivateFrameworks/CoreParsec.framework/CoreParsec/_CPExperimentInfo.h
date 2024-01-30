@class NSString, NSData;

@interface _CPExperimentInfo : PBCodable <_CPExperimentInfo, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *namespaceId;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) int deploymentId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;

@end
