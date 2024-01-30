@class NSString;
@protocol STStatusDomainDataDifferencing, STStatusDomainData, STStatusDomainDataDiff;

@interface STStatusDomainDataChangeRecordDiffEntry : NSObject <STStatusDomainDataChangeRecordEntry>

@property (readonly, nonatomic) id<STStatusDomainDataDiff> diff;
@property (readonly, nonatomic) id clientKey;
@property (readonly, nonatomic) unsigned long long entryType;
@property (readonly, nonatomic) id<STStatusDomainData, STStatusDomainDataDifferencing> data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDiff:(id)a0 clientKey:(id)a1;
- (void).cxx_destruct;

@end
