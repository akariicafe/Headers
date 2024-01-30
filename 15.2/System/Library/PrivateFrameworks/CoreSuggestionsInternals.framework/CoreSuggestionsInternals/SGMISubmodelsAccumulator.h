@class NSDictionary;

@interface SGMISubmodelsAccumulator : NSObject

@property (readonly) NSDictionary *submodels;

- (void).cxx_destruct;
- (id)init;
- (void)ingest:(id)a0 asSalient:(BOOL)a1;
- (void)commitToStore:(id)a0;

@end
