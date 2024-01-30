@class NSString, SXViewport;

@interface SXComponentVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewport:(id)a0;
- (double)visiblePercentageOfObject:(id)a0;

@end
