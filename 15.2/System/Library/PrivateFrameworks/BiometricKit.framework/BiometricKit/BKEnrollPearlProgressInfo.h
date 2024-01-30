@class NSArray;

@interface BKEnrollPearlProgressInfo : NSObject

@property (nonatomic) long long percentageCompleted;
@property (retain, nonatomic) NSArray *enrolledPoses;

- (id)initFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithPercents:(long long)a0;
- (id)initFromEnrollInfo:(const struct { unsigned short x0; unsigned short x1; struct { unsigned short x0; unsigned short x1; unsigned int x2; float x3; float x4; float x5; } x2; unsigned short x3; unsigned short x4; unsigned char x5[0]; } *)a0;

@end
