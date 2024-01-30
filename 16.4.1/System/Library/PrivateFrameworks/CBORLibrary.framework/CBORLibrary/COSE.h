@class NSArray, NSDictionary, NSData, CBOR, NSString;

@interface COSE : NSObject {
    CBOR *_cborObj;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *protectedHeaderParameters;
@property (readonly, nonatomic) NSDictionary *protectedHeadererDictionary;
@property (readonly, nonatomic) NSDictionary *unprotectedHeaderParameters;
@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) CBOR *tag;
@property (readonly, nonatomic) long long algorithmIdentifier;
@property (readonly, nonatomic) NSArray *criticalHeaderParameters;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSData *keyIdentifier;
@property (readonly, nonatomic) NSData *initializationVector;
@property (readonly, nonatomic) NSData *partialInitializationVector;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(long long)a1;
- (id)initWithCBOR:(id)a0;

@end
