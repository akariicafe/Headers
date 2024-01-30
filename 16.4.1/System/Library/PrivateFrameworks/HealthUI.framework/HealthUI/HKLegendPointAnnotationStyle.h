@class NSString, HKAxisLabelStyle;

@interface HKLegendPointAnnotationStyle : NSObject <NSCopying>

@property (copy, nonatomic) HKAxisLabelStyle *labelStyle;
@property (copy, nonatomic) NSString *localizedLabelKey;
@property (nonatomic) BOOL leftOfSeries;

+ (id)annotationStyleWithLabelStyle:(id)a0 localizedLabelKey:(id)a1 leftOfSeries:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
