@class NSArray;

@interface MeasureFoundation.WorldPoint : MeasureFoundation.MeasureObject {
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ parentLine;
    void /* unknown type, empty encoding */ snapLine;
    void /* unknown type, empty encoding */ partOfRectangleId;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ anchor;
    void /* unknown type, empty encoding */ triangulationAnchor;
}

@property (nonatomic, copy) NSArray *lines;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)init;

@end
