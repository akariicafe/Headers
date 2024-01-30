@class NSNumber;

@interface MREResult : NSObject

@property (readonly, nonatomic) unsigned long long trackID;
@property (readonly, nonatomic) double offset;
@property (readonly, retain, nonatomic) NSNumber *timeSkew;
@property (readonly, retain, nonatomic) NSNumber *freqSkew;
@property (readonly, retain, nonatomic) NSNumber *score;

- (void)dealloc;
- (id)initWithTrackId:(unsigned long long)a0 offset:(double)a1 timeSkew:(id)a2 freqSkew:(id)a3 score:(id)a4;

@end
