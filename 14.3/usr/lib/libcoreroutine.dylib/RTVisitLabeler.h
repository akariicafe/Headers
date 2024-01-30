@class RTDefaultsManager, RTPlaceInferenceManager;

@interface RTVisitLabeler : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTPlaceInferenceManager *placeInferenceManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 placeInferenceManager:(id)a1;
- (void)labelVisit:(id)a0 handler:(id /* block */)a1;
- (BOOL)labelVisit:(id)a0 error:(id *)a1;

@end
