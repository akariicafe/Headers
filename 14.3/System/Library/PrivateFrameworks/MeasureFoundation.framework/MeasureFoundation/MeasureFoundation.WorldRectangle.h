@interface MeasureFoundation.WorldRectangle : MeasureFoundation.MeasureObject {
    void /* unknown type, empty encoding */ edges;
    void /* unknown type, empty encoding */ splitters;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ rectangleDataBuffer;
    void /* unknown type, empty encoding */ expirationTime;
    void /* unknown type, empty encoding */ expirationTimer;
    void /* unknown type, empty encoding */ expirationAction;
}

@property (nonatomic) long long state;

- (id)init;
- (void).cxx_destruct;

@end
