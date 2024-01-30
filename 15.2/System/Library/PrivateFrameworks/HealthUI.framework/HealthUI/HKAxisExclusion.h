@class NSString, NSMutableArray;

@interface HKAxisExclusion : NSObject <HKGraphRendererExclusion>

@property (retain, nonatomic) NSMutableArray *excludedRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)excludeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
