@class NSString, NSDictionary;

@interface DESPFLEncryptor : NSObject {
    NSDictionary *_recipeUserInfo;
}

@property (copy, nonatomic) id /* block */ privatizerWithCustomParameters;
@property (copy, nonatomic) id /* block */ privatizer;
@property (readonly, nonatomic) BOOL pluginShouldAddNoiseAndEncryptResult;
@property (readonly, nonatomic) BOOL writeToSubmissionLogs;
@property (copy, nonatomic) NSString *privatizationIdentifier;
@property (nonatomic) long long version;
@property (nonatomic) double weight;

+ (BOOL)privatizationSupported;

- (id)initWithRecipe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRecipeUserInfo:(id)a0;
- (id)encryptedDataWithPublicKey:(id)a0 inPlaceDataFloatNumbers:(float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)_encryptedAndPrivatizedDataWithPublicKey:(id)a0 separatedDPParameter:(id)a1 inPlaceNumbers:(float *)a2 count:(unsigned long long)a3 error:(id *)a4;
- (id)_encryptedDataWithPublicKey:(id)a0 inPlaceDataFloatNumbers:(float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)_encryptedDataWithPublicKey:(id)a0 noiseable:(id)a1 error:(id *)a2;
- (void)_maybeQuantizeDataTransportOfNoisable:(id)a0;
- (id)_newNoiseable;
- (id)_requestedTransport;
- (id)encryptAndPrivatizeDataWithRecipe:(id)a0 numbers:(float *)a1 count:(unsigned long long)a2 inPlace:(BOOL)a3 error:(id *)a4;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)a0 inPlaceNumbers:(float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)a0 numbers:(const float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedDataWithPublicKey:(id)a0 data:(id)a1 error:(id *)a2;
- (id)encryptedDataWithPublicKey:(id)a0 dataFloatNumbers:(const float *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedDataWithPublicKey:(id)a0 dataNumbers:(const double *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)encryptedDataWithPublicKey:(id)a0 inPlaceDataNumbers:(double *)a1 count:(unsigned long long)a2 error:(id *)a3;
- (id)initWithRecipeUserInfo:(id)a0 writeToSubmissionLogs:(BOOL)a1;

@end
