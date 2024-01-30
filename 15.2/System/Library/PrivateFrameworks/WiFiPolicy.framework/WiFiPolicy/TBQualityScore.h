@class NSString;

@interface TBQualityScore : NSObject <TBScore>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *typeDescription;
@property (nonatomic) unsigned long long score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)qualityScoreWithValue:(unsigned long long)a0;

@end
