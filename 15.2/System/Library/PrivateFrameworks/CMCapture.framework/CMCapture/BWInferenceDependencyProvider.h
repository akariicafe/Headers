@class NSMapTable, NSDictionary, NSSet, NSArray;

@interface BWInferenceDependencyProvider : NSObject

@property (readonly, nonatomic) NSMapTable *dependenciesByInputVideoRequirements;
@property (readonly, nonatomic) NSMapTable *dependenciesByOutputVideoRequirements;
@property (retain, nonatomic) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (retain, nonatomic) NSSet *consumedVideoAttachedMediaKeys;
@property (readonly, copy, nonatomic) NSArray *allInputVideoDependencies;
@property (readonly, copy, nonatomic) NSArray *allOutputVideoDependencies;
@property (nonatomic) int supportedPixelBufferCompressionType;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)dependenciesForInputVideoRequirement:(id)a0;
- (id)dependenciesForOutputVideoRequirement:(id)a0;

@end
