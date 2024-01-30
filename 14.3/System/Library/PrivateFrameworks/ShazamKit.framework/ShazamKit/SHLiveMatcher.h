@class NSMutableArray, SHLocalStore, NSString, SHMutableSignature, SHMRESignatureMatcher;
@protocol SHMatcherDelegate;

@interface SHLiveMatcher : NSObject <SHLocalStoreDelegate, SHMatcher>

@property (retain, nonatomic) SHLocalStore *localStore;
@property (retain, nonatomic) SHMRESignatureMatcher *mreMatcher;
@property (retain, nonatomic) SHMutableSignature *mutableSignature;
@property (retain, nonatomic) NSMutableArray *referenceSignagures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)matchSignature:(id)a0;
- (void)bufferProduced:(id)a0 atTime:(id)a1;
- (id)initWithLiveStore:(id)a0;
- (id)buildRollingSignature;
- (void)buildMREForSignatures:(id)a0;

@end
