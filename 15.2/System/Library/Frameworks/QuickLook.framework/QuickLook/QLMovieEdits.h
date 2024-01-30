@interface QLMovieEdits : NSObject

@property (nonatomic) unsigned long long rightRotationsCount;
@property (nonatomic) double trimStartTime;
@property (nonatomic) double trimEndTime;

+ (id)editsWithRightRotationsCount:(unsigned long long)a0 trimStartTime:(double)a1 trimEndTime:(double)a2;

- (BOOL)rotated;
- (BOOL)trimmed;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)hasEdits;
- (void)resetEditingValues;
- (void)resetTrimmingValues;
- (void)incrementRightRotationsCount;

@end
