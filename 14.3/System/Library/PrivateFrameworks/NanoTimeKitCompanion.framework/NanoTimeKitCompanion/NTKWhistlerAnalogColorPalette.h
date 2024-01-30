@class CLKDevice;

@interface NTKWhistlerAnalogColorPalette : NSObject {
    CLKDevice *_device;
}

+ (id)swatchColorForColor:(unsigned long long)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)handStrokeColorForColor:(unsigned long long)a0;
- (id)handFillColorForColor:(unsigned long long)a0;
- (id)secondHandColorForColor:(unsigned long long)a0;
- (id)hourTicksColorForColor:(unsigned long long)a0;
- (id)complicationForegroundColor:(unsigned long long)a0;
- (id)bezelTextColorForColor:(unsigned long long)a0;
- (id)platterTextColorForColor:(unsigned long long)a0;
- (id)dialFillColorForColor:(unsigned long long)a0;
- (id)minuteTicksColorForColor:(unsigned long long)a0;
- (id)mainColorForColor:(unsigned long long)a0;

@end
