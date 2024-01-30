@interface _ATXRecipeEvaluation : NSObject

+ (id)inputScoresFromItem:(struct { double x0[807]; double x1; } *)a0;
+ (unsigned long long)rankOfScore:(double)a0 inputItems:(struct { double x0[807]; double x1; } *)a1 count:(unsigned long long)a2;
+ (double)kendallTauFirstItems:(struct { double x0[807]; double x1; } *)a0 secondItems:(struct { double x0[807]; double x1; } *)a1 count:(unsigned long long)a2;
+ (id)evaluateRecipe:(id)a0 recordData:(id)a1;
+ (id)evaluateRecipe:(id)a0 recordInfo:(id)a1 recordData:(id)a2 attachments:(id)a3 errorDomain:(id)a4 error:(id *)a5;

@end
