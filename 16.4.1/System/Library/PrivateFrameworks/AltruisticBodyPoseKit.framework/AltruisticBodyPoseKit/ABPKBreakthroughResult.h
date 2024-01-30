@class ABPK2dSkeleton;

@interface ABPKBreakthroughResult : NSObject {
    ABPK2dSkeleton *_skeleton2D;
    unsigned int _trackingId;
    BOOL _isFaceVisible;
    BOOL _isRaisingHand;
    BOOL _isWavingHand;
}

@property (readonly, nonatomic) ABPK2dSkeleton *skeleton2D;
@property (readonly, nonatomic) BOOL isPoseValid;
@property (readonly, nonatomic) unsigned int trackingId;
@property (readonly, nonatomic) BOOL isFaceVisible;
@property (readonly, nonatomic) BOOL isRaisingHand;
@property (readonly, nonatomic) BOOL isWavingHand;

- (id)init;
- (void).cxx_destruct;
- (id)initWith2dSkeleton:(id)a0 isPoseValid:(BOOL)a1 trackingId:(unsigned int)a2 isFaceVisible:(BOOL)a3 isRaisingHand:(BOOL)a4 isWavingHand:(BOOL)a5;
- (int)overlayResultOnImage:(SEL)a0 withResult:(struct __CVBuffer { } *)a1 withColor:(struct __CVBuffer { } *)a2;
- (void)set2dSkeleton:(id)a0 isPoseValid:(BOOL)a1 trackingId:(unsigned int)a2 isFaceVisible:(BOOL)a3 isRaisingHand:(BOOL)a4 isWavingHand:(BOOL)a5;

@end
