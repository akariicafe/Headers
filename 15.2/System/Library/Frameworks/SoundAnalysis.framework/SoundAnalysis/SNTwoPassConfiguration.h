@protocol SNRequest;

@interface SNTwoPassConfiguration : NSObject

@property (readonly) id<SNRequest> firstPassRequest;
@property (readonly) id<SNRequest> secondPassRequest;
@property (readonly) double historicalDataAmount;

- (void).cxx_destruct;
- (id)initWithFirstPassRequest:(id)a0 secondPassRequest:(id)a1 historicalDataAmount:(double)a2;

@end
