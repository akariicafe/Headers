@class CRKASMCourseUpdateProperties;
@protocol CRKASMLocation;

@interface CRKASMCourseCreateProperties : NSObject <NSCopying>

@property (retain, nonatomic) id<CRKASMLocation> location;
@property (copy, nonatomic) CRKASMCourseUpdateProperties *updateProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)areFulfilledByCourse:(id)a0;

@end
