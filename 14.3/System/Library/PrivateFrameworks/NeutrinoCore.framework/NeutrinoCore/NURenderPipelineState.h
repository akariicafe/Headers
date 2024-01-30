@class NSArray, NSDictionary, NURenderTagGroup, NSMutableArray;

@interface NURenderPipelineState : NSObject <NSCopying> {
    NSMutableArray *_groupStack;
}

@property (readonly) long long serialNumber;
@property long long evaluationMode;
@property long long mediaComponentType;
@property long long auxiliaryImageType;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } rawTime;
@property long long sampleMode;
@property struct { long long numerator; long long denominator; } scale;
@property long long roundingPolicy;
@property (copy, nonatomic) NSArray *pipelineFilters;
@property (copy, nonatomic) NSDictionary *videoFrames;
@property (readonly) NURenderTagGroup *rootGroup;
@property (readonly) NURenderTagGroup *currentGroup;
@property (readonly) unsigned long long groupCount;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)resetRenderTagGroups;
- (id)initForCopy;
- (id)beginGroupWithName:(id)a0 error:(out id *)a1;
- (BOOL)endGroupWithName:(id)a0 error:(out id *)a1;
- (BOOL)applyPipelineSettings:(id)a0 error:(out id *)a1;
- (id)pipelineSettingsFromSourceSettings:(id)a0;

@end
