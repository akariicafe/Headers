@interface TCMLCHARGraph : NSObject

+ (id)defineGraphConv:(id)a0 input:(id)a1 graph:(id)a2 descriptor:(id)a3 weights:(id)a4;
+ (id)defineResidual:(id)a0 input:(id)a1 graph:(id)a2 descriptor:(id)a3 weights:(id)a4;
+ (id)defineSTGCN:(id)a0 input:(id)a1 graph:(id)a2 descriptor:(id)a3 weights:(id)a4;
+ (id)defineSTGCNAction:(id)a0 input:(id)a1 graph:(id)a2 descriptor:(id)a3 weights:(id)a4;
+ (id)defineTemporalConvolutionalNetwork:(id)a0 input:(id)a1 graph:(id)a2 descriptor:(id)a3 weights:(id)a4;

@end
