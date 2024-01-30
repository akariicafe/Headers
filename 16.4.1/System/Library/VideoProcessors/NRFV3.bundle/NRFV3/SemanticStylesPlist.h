@interface SemanticStylesPlist : NSObject {
    struct { float zeroPoint; float negCutoff; float posCutoff; } _toneBiasRemap;
    struct { struct { float tide; float light; float shadow; float brightSat; float sat; float exposure; float brightness; float contrast; } pos; struct { float tide; float light; float shadow; float brightSat; float sat; float exposure; float brightness; float contrast; } neg; } _bgTuning[4];
    struct { float personMix; float skinMix; struct { float faceI; float faceQ; float underTone; } warm; struct { float faceI; float faceQ; float underTone; } cool; } _fgTuning;
}

@property (readonly, nonatomic) const struct { float x0; float x1; float x2; } *toneBiasRemap;
@property (readonly, nonatomic) const struct { float x0; float x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; } *fgTuning;

- (int)readPlist:(id)a0;
- (const struct { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; } *)bgTuningForSceneType:(unsigned int)a0;
- (int)readBackgroundTuning:(id)a0 forSceneType:(unsigned int)a1;
- (int)readForegroundTuning:(id)a0;
- (int)readToneBiasRemap:(id)a0;

@end
