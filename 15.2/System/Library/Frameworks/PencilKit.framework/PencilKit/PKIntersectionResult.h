@class NSOrderedSet;

@interface PKIntersectionResult : NSObject

@property (retain, nonatomic) NSOrderedSet *intersectedStrokes;
@property (nonatomic) long long intersectionAlgorithmType;
@property (nonatomic) long long contentType;

+ (id)noResult;

- (void).cxx_destruct;

@end
