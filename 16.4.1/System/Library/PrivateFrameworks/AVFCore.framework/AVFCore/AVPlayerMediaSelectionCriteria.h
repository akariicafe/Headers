@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {
    void *_criteriaInternal;
}

@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) NSArray *preferredMediaCharacteristics;
@property (readonly, nonatomic) NSArray *principalMediaCharacteristics;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)figDictionary;
- (id)initWithFigDictionary:(id)a0;
- (id)initWithPreferredLanguages:(id)a0 preferredMediaCharacteristics:(id)a1;
- (id)initWithPreferredLanguages:(id)a0 preferredMediaCharacteristics:(id)a1 fallbackPreferredLanguages:(id)a2 fallbackPreferredMediaCharacteristics:(id)a3 captionDisplayType:(long long)a4;
- (id)initWithPreferredLanguages:(id)a0 preferredMediaCharacteristics:(id)a1 preferredMediaSubTypes:(id)a2 precludedMediaSubTypes:(id)a3;
- (id)initWithPreferredLanguages:(id)a0 preferredMediaCharacteristics:(id)a1 preferredMediaSubTypes:(id)a2 precludedMediaSubTypes:(id)a3 preferMultichannelAudio:(BOOL)a4 precludeMultichannelAudio:(BOOL)a5;
- (id)initWithPrincipalMediaCharacteristics:(id)a0 preferredLanguages:(id)a1 preferredMediaCharacteristics:(id)a2;
- (BOOL)precludeMultichannelAudio;
- (id)precludedMediaSubTypes;
- (BOOL)preferMultichannelAudio;
- (id)preferredMediaSubTypes;

@end
