@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)locationStringForEvent:(id)a0;
+ (void)locationStringForEvent:(id)a0 options:(unsigned long long)a1 completionBlock:(id /* block */)a2;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 options:(unsigned long long)a3;
+ (id)labelForLocation:(id)a0;

@end
