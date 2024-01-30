@class NSValue, NSMutableDictionary;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;

- (id)backgroundImageForState:(unsigned long long)a0 isMini:(BOOL)a1;
- (void).cxx_destruct;
- (id)anyBackgroundImage;
- (void)setBackgroundVerticalAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)a0;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 isMini:(BOOL)a2;

@end
