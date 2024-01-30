@class SXColumnLayouter, SXLayoutTask, NSString, SXLayoutBlueprint;
@protocol SXDOMObjectProviding, SXComponentSizerEngine, SXLayoutBlueprintFactory;

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate>

@property (readonly, nonatomic) id<SXComponentSizerEngine> componentSizerEngine;
@property (readonly, nonatomic) id<SXLayoutBlueprintFactory> layoutBlueprintFactory;
@property BOOL executing;
@property BOOL finished;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) SXColumnLayouter *layouter;
@property (readonly, nonatomic) SXLayoutTask *task;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) SXLayoutBlueprint *layoutBlueprint;
@property (copy, nonatomic, setter=beforeLayout:) id /* block */ beforeBlock;
@property (copy, nonatomic, setter=afterLayout:) id /* block */ afterBlock;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (void)cancelOperation;
- (void)layouter:(id)a0 didFinishLayoutForComponentBlueprint:(id)a1 layoutBlueprint:(id)a2 shouldContinueLayout:(BOOL *)a3;
- (void)startBookKeeping;
- (void)prepareLayoutBlueprint:(id)a0;
- (void)finishBookKeeping;
- (id)layoutWithBlueprint:(id)a0;
- (BOOL)layoutBlueprint:(id)a0 containsComponents:(id)a1;
- (void)updateLayoutBlueprint:(id)a0 components:(id)a1;
- (id)createLayoutBlueprintForComponents:(id)a0;
- (void)registerComponent:(id)a0 layoutBlueprint:(id)a1 componentIndex:(unsigned long long)a2;
- (id)initWithTask:(id)a0 layouter:(id)a1 DOMObjectProvider:(id)a2 componentSizerEngine:(id)a3 layoutBlueprintFactory:(id)a4;

@end
