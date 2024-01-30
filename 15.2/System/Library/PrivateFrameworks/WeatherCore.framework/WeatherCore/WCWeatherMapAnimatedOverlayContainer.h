@class NSArray;

@interface WCWeatherMapAnimatedOverlayContainer : NSObject

@property (retain, nonatomic) NSArray *frames;
@property (readonly, nonatomic) unsigned long long frameCount;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)frameAtIndex:(unsigned long long)a0;
- (id)copyFramesFromArchiveData:(id)a0 error:(id *)a1;

@end
