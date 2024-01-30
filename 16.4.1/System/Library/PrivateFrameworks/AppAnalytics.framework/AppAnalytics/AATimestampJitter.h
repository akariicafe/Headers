@interface AATimestampJitter : NSObject

@property (class, nonatomic, readonly) AATimestampJitter *default;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ enabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ lowerBound;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ upperBound;

- (id)init;
- (void).cxx_destruct;
- (id)withLowerBound:(double)a0;
- (id)withUpperBound:(double)a0;
- (id)withEnabled:(BOOL)a0;

@end
