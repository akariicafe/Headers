@interface BKMatchPearlResultInfo : BKMatchResultInfo

@property (readonly, nonatomic) long long feedback;
@property (readonly, nonatomic) unsigned long long periocularMatchState;

- (id)initWithServerIdentity:(id)a0 details:(id)a1 device:(id)a2;

@end
