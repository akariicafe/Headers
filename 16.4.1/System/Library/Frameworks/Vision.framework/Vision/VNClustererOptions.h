@class NSString, NSData;

@interface VNClustererOptions : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSData *state;
@property (nonatomic) float threshold;
@property (nonatomic) float torsoThreshold;
@property (nonatomic) unsigned long long requestRevision;
@property (nonatomic) unsigned long long torsoprintRequestRevision;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 requestRevision:(unsigned long long)a4;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4 requestRevision:(unsigned long long)a5;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4 requestRevision:(unsigned long long)a5 torsoprintRequestRevision:(unsigned long long)a6;

@end
