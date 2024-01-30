@class CARAutomaticDNDStatus;

@interface CCUICarModeModule : CCUIToggleModule {
    CARAutomaticDNDStatus *_carDNDStatus;
    BOOL _isSelected;
    BOOL _carModeActive;
}

+ (id)statusOnString;
+ (id)statusOffString;

- (id)iconGlyph;
- (id)selectedColor;
- (void)setSelected:(BOOL)a0;
- (void)_updateState:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isSelected;
- (void)_toggleState:(BOOL)a0;

@end
