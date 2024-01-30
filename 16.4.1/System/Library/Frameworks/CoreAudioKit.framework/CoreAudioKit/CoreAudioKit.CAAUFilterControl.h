@interface CoreAudioKit.CAAUFilterControl : NSObject <CALayerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ param1;
    void /* unknown type, empty encoding */ param2;
    void /* unknown type, empty encoding */ param3;
    void /* unknown type, empty encoding */ guides;
    void /* unknown type, empty encoding */ points;
    void /* unknown type, empty encoding */ highlighted;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ drawVerticalGuide;
    void /* unknown type, empty encoding */ drawHorizontalGuide;
    void /* unknown type, empty encoding */ drawTrianglesOnEdges;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ widthType;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ widthPixels;
    void /* unknown type, empty encoding */ tapOffest;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ dataSource;
@property (nonatomic, retain) void /* unknown type, empty encoding */ controlLayer;
@property (nonatomic) void /* unknown type, empty encoding */ enabled;
@property (nonatomic) void /* unknown type, empty encoding */ bypassed;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setWithColor:(id)a0;

@end
