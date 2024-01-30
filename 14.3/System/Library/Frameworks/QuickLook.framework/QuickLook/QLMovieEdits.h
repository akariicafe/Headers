@interface QLMovieEdits : NSObject

@property (nonatomic) unsigned long long rightRotationsCount;
@property (nonatomic) double trimStartTime;
@property (nonatomic) double trimEndTime;

+ (id)editsWithRightRotationsCount:(unsigned long long)a0 trimStartTime:(double)a1 trimEndTime:(double)a2;

- (id)init;
- (BOOL)rotated;
- (BOOL)trimmed;
- (BOOL)isEqual:(id)a0;
- (void)resetEditingValues;
- (void)resetTrimmingValues;
- (void)incrementRightRotationsCount;
- (BOOL)hasEdits;

@end
