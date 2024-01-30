@class NSString;

@interface TBPopularityScore : NSObject <TBScore>

@property (retain, nonatomic) NSString *typeDescription;
@property (nonatomic) unsigned long long score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popularityScoreWithValue:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithValue:(unsigned long long)a0;

@end
