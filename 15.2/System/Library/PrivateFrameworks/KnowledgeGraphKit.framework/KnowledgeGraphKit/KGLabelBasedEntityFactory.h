@class NSMutableDictionary;

@interface KGLabelBasedEntityFactory : NSObject <KGEntityFactory> {
    NSMutableDictionary *_classByNodeLabels;
    NSMutableDictionary *_classByEdgeLabels;
}

@property (retain, nonatomic) Class defaultNodeClass;
@property (retain, nonatomic) Class defaultEdgeClass;

- (void)registerNodeClass:(Class)a0 forLabels:(id)a1;
- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (void).cxx_destruct;
- (void)registerEdgeClass:(Class)a0 forLabels:(id)a1;
- (id)init;
- (Class)classForNodeLabels:(id)a0;
- (id)_generateAllPossibleLabelSetsForLabels:(id)a0 labelSetsCache:(id)a1;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (Class)_selectClassFromPossibleLabels:(id)a0 dictionary:(id)a1;
- (Class)classForEdgeLabels:(id)a0;

@end
