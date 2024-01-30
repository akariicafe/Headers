@class NSUUID;

@interface HDClinicalIngestionTaskPerAccountInfo : NSObject

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (nonatomic) unsigned long long outcomeInfo;

- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0;
- (void)addOutcomeInfo:(unsigned long long)a0;

@end
