@interface WeatherMaps.MapScrubberGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ lastTranslation;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ feedbackGenerator;
}

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
