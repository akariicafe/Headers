@class NSString, NSArray;

@interface BlastDoorAnimatedImageMetadata : NSObject {
    void /* unknown type, empty encoding */ animatedImageMetadata;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *durations;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } pixelSize;

- (id)init;
- (void).cxx_destruct;

@end
