@class UIFont, CLKDevice;

@interface NTKExtragalacticDigitRenderer : NSObject {
    CLKDevice *_device;
    UIFont *_font;
    double _ascent;
    double _descent;
    double _capHeight;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)loadDrawInfoForDigit:(id)a0 inStyle:(unsigned long long)a1;

@end
