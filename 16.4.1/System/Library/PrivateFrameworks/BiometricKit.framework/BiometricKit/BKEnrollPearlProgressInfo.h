@class NSArray;

@interface BKEnrollPearlProgressInfo : NSObject

@property (nonatomic) long long percentageCompleted;
@property (retain, nonatomic) NSArray *enrolledPoses;

- (id)initFromDictionary:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initFromEnrollInfo:(const struct { unsigned short x0; unsigned short x1; struct { unsigned char x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; float x6; float x7; float x8; unsigned int x9; } x2; unsigned short x3; unsigned short x4; unsigned char x5[0]; } *)a0;
- (id)initWithPercents:(long long)a0;

@end
