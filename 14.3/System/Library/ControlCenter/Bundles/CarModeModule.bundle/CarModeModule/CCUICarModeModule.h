@class CARAutomaticDNDStatus;

@interface CCUICarModeModule : CCUIToggleModule {
    CARAutomaticDNDStatus *_carDNDStatus;
    BOOL _isSelected;
    BOOL _carModeActive;
}

+ (id)statusOnString;
+ (id)statusOffString;

- (id)iconGlyph;
- (id)init;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)_updateState:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)selectedColor;
- (void)_toggleState:(BOOL)a0;

@end
