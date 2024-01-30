@interface PISourceSelectAdjustmentController : PIAdjustmentController

@property (nonatomic) long long sourceSelection;

+ (long long)sourceSelectionForString:(id)a0;
+ (id)sourceSelectionKey;
+ (id)stringForSourceSelection:(long long)a0;

@end
