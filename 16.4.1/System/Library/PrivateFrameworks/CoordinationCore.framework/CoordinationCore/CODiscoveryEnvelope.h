@class CODiscoveryRecord;

@interface CODiscoveryEnvelope : NSObject

@property (readonly, nonatomic) CODiscoveryRecord *record;
@property (readonly, nonatomic) unsigned long long received;

+ (id)envelopeWithRecord:(id)a0;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;

@end
