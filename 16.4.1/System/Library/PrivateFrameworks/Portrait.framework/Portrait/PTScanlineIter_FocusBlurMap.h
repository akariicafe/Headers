@class NSString, PTScanlineMask_FocusBlurMap;

@interface PTScanlineIter_FocusBlurMap : NSObject <PTScanlineIter>

@property unsigned long long currentTileRow;
@property unsigned long long currentTile;
@property (readonly) PTScanlineMask_FocusBlurMap *mask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMask:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_advanceToNextTile;
- (void)_advanceToNextTileRow;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextRangeX;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextRangeY;
- (void)resetX;

@end
