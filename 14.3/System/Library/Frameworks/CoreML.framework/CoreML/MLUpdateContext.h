@class MLModel, MLUpdateTask, NSDictionary, NSError;
@protocol MLWritable;

@interface MLUpdateContext : NSObject

@property (retain, nonatomic) MLUpdateTask *task;
@property (retain, nonatomic) MLModel<MLWritable> *model;
@property (nonatomic) long long event;
@property (retain, nonatomic) NSDictionary *metrics;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSError *error;

+ (id)updateContextWithTask:(id)a0 model:(id)a1 event:(long long)a2 metrics:(id)a3 parameters:(id)a4;
+ (id)updateContextForEvent:(long long)a0 metrics:(id)a1 parameters:(id)a2 error:(id)a3;

- (void).cxx_destruct;
- (id)description;

@end
