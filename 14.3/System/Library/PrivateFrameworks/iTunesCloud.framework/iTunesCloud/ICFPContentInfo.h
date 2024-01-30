@interface ICFPContentInfo : NSObject

@property (readonly, nonatomic) long long vodkaType;
@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) union FPContentInfo_ { unsigned int x0; struct VanillaVodkaAttributes_ { unsigned int x0; struct sinfEntry_ *x1; unsigned int x2; } x1; struct CloudVodkaAttributes_ { unsigned int x0; unsigned int x1; unsigned long long x2; } x2; struct WHAVodkaAttributes_ { unsigned int x0; unsigned long long x1; } x3; } fpContentInfo;

+ (id)whaContentInfoWithAccountID:(unsigned long long)a0;

- (id)_init;

@end
