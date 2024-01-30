@class NSString;

@interface AXElementGroupingKeyboardExtrasConsolidationPass : NSObject <AXElementGroupingTransformationPass>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldTransformGroup:(id)a0 forGrouper:(id)a1;
- (id)transformGroup:(id)a0 forGrouper:(id)a1;

@end
