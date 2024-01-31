@interface CNVisualSimilarity : NSObject

+ (id)log;
+ (id)fingerprintForData:(id)a0;
+ (BOOL)isFingerprint:(id)a0 similarTo:(id)a1;
+ (BOOL)isFingerprint:(id)a0 similarTo:(id)a1 threshold:(double)a2;
+ (BOOL)isData:(id)a0 similarTo:(id)a1;

@end
