@class NSString, NSArray, NSHashTable;

@interface MontrealNNModelTensor : MontrealNNDescription <NSCopying, MontrealNNDescriptionProtocol>

@property (readonly) NSString *name;
@property (readonly) NSArray *dimension;
@property (readonly) NSHashTable *asInput;
@property (readonly) NSHashTable *asOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInputs:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a0 inputChunks:(id)a1 nodeName:(id)a2;
+ (id)createOutputs:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a0 outputChunks:(id)a1 nodeName:(id)a2;

- (id)jsonDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (id)checkForValidity;
- (id)initWithName:(id)a0 dimension:(id)a1;
- (unsigned long long)tensorSize;

@end
