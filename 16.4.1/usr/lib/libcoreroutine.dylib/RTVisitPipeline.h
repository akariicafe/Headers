@class NSString, RTVisitHyperParameter, NSArray, NSDate, RTVisit, NSMutableDictionary;

@interface RTVisitPipeline : NSObject {
    NSArray *_modules;
    NSMutableDictionary *_moduleStats;
    unsigned long long _iteration;
}

@property (retain, nonatomic) NSDate *lastProcessedLocationDate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTVisit *lastVisit;
@property (nonatomic) BOOL bootStrappingDone;
@property (readonly, nonatomic) RTVisitHyperParameter *hyperParameter;

+ (id)typeToString:(unsigned long long)a0;

- (id)filterLocations:(id)a0;
- (id)processLocations:(id)a0;
- (BOOL)isRedundantForVisit:(id)a0 currentVisit:(id)a1 distanceCalculator:(id)a2;
- (id)processVisitCluster:(id)a0;
- (id)initWithModules:(id)a0 name:(id)a1 type:(unsigned long long)a2 lastVisit:(id)a3 hyperParameter:(id)a4;
- (void)shutdown;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)filterVisitClusters:(id)a0;

@end
