@class NSMutableDictionary;

@interface KGEntityDescription : NSObject {
    NSMutableDictionary *_classByNodeLabels;
    NSMutableDictionary *_classByEdgeLabels;
}

@property (retain, nonatomic) Class defaultNodeClass;
@property (retain, nonatomic) Class defaultEdgeClass;

- (id)init;
- (void).cxx_destruct;
- (void)registerNodeClass:(Class)a0 forLabels:(id)a1;
- (void)registerEdgeClass:(Class)a0 forLabels:(id)a1;
- (id)_generateAllPossibleLabelSetsForLabels:(id)a0 labelSetsCache:(id)a1;
- (Class)_selectClassFromPossibleLabels:(id)a0 dictionary:(id)a1;
- (Class)classForEdgeLabels:(id)a0;
- (Class)classForNodeLabels:(id)a0;

@end
