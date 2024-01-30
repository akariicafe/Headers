@class NSValue, NSMutableDictionary;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;

- (id)backgroundImageForState:(unsigned long long)a0 isMini:(BOOL)a1;
- (id)anyBackgroundImage;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 isMini:(BOOL)a2;
- (void).cxx_destruct;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)a0;
- (void)setBackgroundVerticalAdjustment:(double)a0 forBarMetrics:(long long)a1;

@end
