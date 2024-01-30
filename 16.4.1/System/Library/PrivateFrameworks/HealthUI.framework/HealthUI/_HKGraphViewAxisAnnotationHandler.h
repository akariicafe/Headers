@class NSString, NSMapTable;

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation>

@property (retain, nonatomic) NSMapTable *seriesToAnnotations;
@property (nonatomic) BOOL clearedPreviousAnnotations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_forceClearAxisAnnotations;
- (void)addAxisAnnotation:(id)a0 forSeries:(id)a1 modelCoordinate:(id)a2;
- (long long)applyAnnotationForSeries:(id)a0;
- (void)clearAxisAnnotations;
- (void)startAnnotationSequence;

@end
