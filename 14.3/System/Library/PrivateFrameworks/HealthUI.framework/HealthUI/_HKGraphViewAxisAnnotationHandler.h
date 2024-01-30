@class NSString, NSMapTable;

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation>

@property (retain, nonatomic) NSMapTable *seriesToAnnotations;
@property (nonatomic) BOOL clearedPreviousAnnotations;
@property (nonatomic) BOOL disableDuringTiling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clearAxisAnnotations;
- (void)startAnnotationSequence;
- (long long)applyAnnotationForSeries:(id)a0 commonAxes:(id)a1;
- (void)addAxisAnnotation:(id)a0 forSeries:(id)a1 modelCoordinate:(id)a2;

@end
