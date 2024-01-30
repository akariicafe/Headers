@class NSArray, NSData, CBOR, NSNumber;

@interface COSEKey : NSObject {
    CBOR *_cborObj;
    NSNumber *_curveID;
    NSData *_paramX;
    NSData *_paramY;
    NSData *_paramD;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long algorithm;
@property (readonly, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) NSData *baseInitializationVector;
@property (readonly, nonatomic) NSNumber *ecCurveIdentifier;
@property (readonly, nonatomic) NSData *ecCurveX;
@property (readonly, nonatomic) NSData *ecCurveY;
@property (readonly, nonatomic) NSData *ecCurveD;
@property (readonly, nonatomic) NSNumber *okpCurveIdentifier;
@property (readonly, nonatomic) NSData *okpCurveX;
@property (readonly, nonatomic) NSData *okpCurveD;
@property (readonly, nonatomic) NSData *symmetricKey;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initEC2WithAlgorithm:(long long)a0 curveIdentifier:(long long)a1 x:(id)a2 y:(id)a3 d:(id)a4 keyOperations:(id)a5 keyIdentifier:(id)a6;
- (id)initWithCBOR:(id)a0;
- (id)initOKPWithAlgorithm:(long long)a0 curveIdentifier:(long long)a1 x:(id)a2 d:(id)a3 keyOperations:(id)a4 keyIdentifier:(id)a5;
- (id)initEC2WithAlgorithm:(long long)a0 curveIdentifier:(long long)a1 x:(id)a2 signBit:(BOOL)a3 d:(id)a4 keyOperations:(id)a5 keyIdentifier:(id)a6;

@end
