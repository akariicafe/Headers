@interface CoreAudioKit.CAAUFilterControl : NSObject <CALayerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ param1;
    void /* unknown type, empty encoding */ param2;
    void /* unknown type, empty encoding */ param3;
    void /* unknown type, empty encoding */ guides;
    void /* unknown type, empty encoding */ points;
    void /* unknown type, empty encoding */ enabled;
    void /* unknown type, empty encoding */ bypassed;
    void /* unknown type, empty encoding */ highlighted;
    void /* unknown type, empty encoding */ drawVerticalGuide;
    void /* unknown type, empty encoding */ drawHorizontalGuide;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ widthType;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ widthPixels;
    void /* unknown type, empty encoding */ tapOffest;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ dataSource;
@property (nonatomic, retain) void /* unknown type, empty encoding */ controlLayer;

- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
