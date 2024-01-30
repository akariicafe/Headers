@interface JDErrorSimulation : NSObject {
    struct unique_ptr<JasperErrorSimulation, std::default_delete<JasperErrorSimulation>> { struct __compressed_pair<JasperErrorSimulation *, std::default_delete<JasperErrorSimulation>> { struct JasperErrorSimulation *__value_; } __ptr_; } _sim;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConstErrorMean:(double)a0 constErrorStd:(double)a1 framePercentageErrorStd:(double)a2;
- (double *)constErrorForSpot:(int)a0 echo:(int)a1 inBank:(int)a2;
- (void)injectErrorsToPointCloud:(id)a0;

@end
