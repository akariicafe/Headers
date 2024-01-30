@class NSString, NUViewport;

@interface NUViewportRegionPolicy : NSObject <NURegionPolicy> {
    NUViewport *_viewport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewport:(id)a0;
- (id)regionForGeometry:(id)a0;

@end
