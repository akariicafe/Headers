@class NSData;

@interface EARAudioResult : NSObject

@property (retain, nonatomic) NSData *audioResultMat;
@property (nonatomic) unsigned long long audioResultsNumVectors;
@property (nonatomic) unsigned long long audioResultsVectorSize;

- (void).cxx_destruct;
- (id)initWithAudioResultMat:(id)a0 vectorSize:(unsigned long long)a1 numVectors:(unsigned long long)a2;

@end
