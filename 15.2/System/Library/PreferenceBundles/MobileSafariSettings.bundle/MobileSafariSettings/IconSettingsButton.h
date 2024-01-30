@class NSNumber, UIImageView;

@interface IconSettingsButton : UIButton {
    UIImageView *_checkImageView;
}

@property (retain, nonatomic) NSNumber *preferenceValue;

- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1 preferenceValue:(id)a2;

@end
