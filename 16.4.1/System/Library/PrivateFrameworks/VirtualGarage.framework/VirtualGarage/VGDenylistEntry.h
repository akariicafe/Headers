@class NSNumber, NSArray;

@interface VGDenylistEntry : NSObject {
    NSNumber *_modelId;
    NSArray *_firmwareIds;
    NSArray *_years;
    NSArray *_models;
}

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithModelId:(id)a0 firmwareIds:(id)a1 years:(id)a2 models:(id)a3;
- (BOOL)isSupersetOfEntry:(id)a0;

@end
