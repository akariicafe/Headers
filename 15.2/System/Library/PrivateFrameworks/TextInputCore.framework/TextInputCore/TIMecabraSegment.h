@class NSString;

@interface TIMecabraSegment : NSObject

@property (retain, nonatomic) NSString *reading;
@property (retain, nonatomic) NSString *surface;

+ (void)splitSegments:(id)a0 at:(int)a1 forPrefix:(id *)a2 forSuffix:(id *)a3;

- (void).cxx_destruct;

@end
