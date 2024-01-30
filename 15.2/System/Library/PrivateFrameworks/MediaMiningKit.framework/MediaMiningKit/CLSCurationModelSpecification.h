@interface CLSCurationModelSpecification : NSObject <NSCopying>

@property (readonly) unsigned long long curationModelVersion;
@property (readonly) unsigned long long sceneAnalysisVersion;
@property (readonly) unsigned long long mediaAnalysisVersion;
@property (readonly) unsigned long long faceAnalysisVersion;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 curationModelVersion:(unsigned long long)a1;
- (id)initWithItemInfo:(id)a0 options:(id)a1;
- (id)initWithCurationModelVersion:(unsigned long long)a0 sceneAnalysisVersion:(unsigned long long)a1 mediaAnalysisVersion:(unsigned long long)a2 faceAnalysisVersion:(unsigned long long)a3;

@end
