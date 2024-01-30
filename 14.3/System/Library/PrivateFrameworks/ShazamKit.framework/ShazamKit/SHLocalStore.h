@class NSArray, NSMutableArray;
@protocol SHLocalStoreDelegate;

@interface SHLocalStore : SHStore {
    double _minimumSignatureLength;
}

@property (retain, nonatomic) NSArray *referenceAudioMediaItems;
@property (readonly, nonatomic) NSMutableArray *localItems;
@property (readonly, nonatomic) double windowSeconds;
@property (weak, nonatomic) id<SHLocalStoreDelegate> delegate;
@property (readonly, nonatomic) long long density;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (double)minimumSignatureLength;
- (id)createMatcher;
- (id)initWithWindowSeconds:(double)a0 minimumSignatureLength:(double)a1 density:(long long)a2;
- (id)initWithDensity:(long long)a0;
- (void)flowReferenceAudio:(id)a0 atTime:(id)a1 representingMediaItems:(id)a2;
- (BOOL)addReferenceSignaturesBundleFromPath:(id)a0 error:(id *)a1;
- (BOOL)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;

@end
