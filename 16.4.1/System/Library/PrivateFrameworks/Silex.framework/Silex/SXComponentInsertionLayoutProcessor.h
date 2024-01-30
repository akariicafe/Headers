@class SXLayoutOptions, NSString;
@protocol SXComponentInsertionManager;

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor>

@property (readonly, nonatomic) id<SXComponentInsertionManager> componentInsertionManager;
@property (retain, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processLayoutTask:(id)a0 layoutBlueprint:(id)a1 DOMObjectProvider:(id)a2;
- (id)initWithComponentInsertionManager:(id)a0;

@end
