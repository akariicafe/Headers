@class NSString, NURenderNode;

@interface NURenderTagNode : NURenderNode

@property (readonly) NSString *name;
@property (retain) NURenderNode *input;

+ (BOOL)validateName:(id)a0 error:(out id *)a1;

- (void).cxx_destruct;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateGeometrySpaceMap:(out id *)a0;
- (id)descriptionSubClassHook;
- (id)_descriptionWithOffset:(long long)a0 showInputs:(BOOL)a1;
- (id)initWithInput:(id)a0 name:(id)a1;

@end
