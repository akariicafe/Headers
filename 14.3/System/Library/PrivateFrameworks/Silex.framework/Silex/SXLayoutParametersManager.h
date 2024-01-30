@class NSMutableDictionary;

@interface SXLayoutParametersManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *durations;

- (id)init;
- (void).cxx_destruct;
- (void)layoutFinishedForTask:(id)a0 result:(id)a1;
- (id)layoutParametersForTask:(id)a0 previousLayoutOptions:(id)a1;

@end
