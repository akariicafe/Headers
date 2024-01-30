@interface PISourceSelectAdjustmentController : PIAdjustmentController

@property (nonatomic) long long sourceSelection;

+ (id)sourceSelectionKey;
+ (id)stringForSourceSelection:(long long)a0;
+ (long long)sourceSelectionForString:(id)a0;

@end
