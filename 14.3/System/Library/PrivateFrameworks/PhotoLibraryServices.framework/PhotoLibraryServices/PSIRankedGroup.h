@class PSIGroup;

@interface PSIRankedGroup : NSObject

@property (readonly, nonatomic) PSIGroup *group;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 score:(double)a1;

@end
