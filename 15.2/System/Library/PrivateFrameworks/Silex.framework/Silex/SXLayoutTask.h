@class NSString, SXLayoutInstructions, SXLayoutBlueprint, SXLayoutOptions, SXDOM;

@interface SXLayoutTask : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SXLayoutOptions *options;
@property (readonly, nonatomic) SXLayoutInstructions *instructions;
@property (readonly, copy, nonatomic) SXLayoutBlueprint *blueprint;
@property (readonly, nonatomic) SXDOM *DOM;
@property (readonly, nonatomic) double startTime;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 instructions:(id)a1 blueprint:(id)a2 DOM:(id)a3;
- (id)initWithOptions:(id)a0 instructions:(id)a1;

@end
