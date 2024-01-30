@class NSDictionary, NSArray;

@interface PFStoryConcreteMotionStyleTable : NSObject <PFStoryMotionStyleTable> {
    NSDictionary *_motionStylesByColorGrade;
    NSArray *_defaultFrequencies;
}

- (void).cxx_destruct;
- (id)motionStylesForColorGrade:(id)a0 songPace:(long long)a1;
- (id)initWithMotionStylesByColorGrade:(id)a0 defaultFrequencies:(id)a1;

@end
