@class TSgPTPPortStatistics, TSXgPTPFDEtEPort;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {
    TSXgPTPFDEtEPort *_implXPC;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (id)initWithImplXPC:(id)a0;
- (void)updateWithXPCStatistics:(id)a0;

@end
