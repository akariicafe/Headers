@class NSData, CIFilter;

@interface _NURAWToneCurveProperties : NSObject {
    NSData *_curveData;
    CIFilter *_rawTRCFilter;
}

- (void).cxx_destruct;
- (id)initWithToneCurveFilter:(id)a0;
- (id)curveData;
- (id)_generateCurveData;
- (float)curveValueAt:(float)a0;

@end
