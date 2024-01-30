@class NSString, SiriPresentationOptions;

@interface _SiriPresentationOptionsMutation : NSObject <SiriPresentationOptionsMutating> {
    SiriPresentationOptions *_baseModel;
    BOOL _wakeScreen;
    BOOL _hideOtherWindowsDuringAppearance;
    long long _rotationStyle;
    long long _requestSource;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasWakeScreen : 1; unsigned char hasHideOtherWindowsDuringAppearance : 1; unsigned char hasRotationStyle : 1; unsigned char hasRequestSource : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generate;
- (void)setRequestSource:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setHideOtherWindowsDuringAppearance:(BOOL)a0;
- (void)setRotationStyle:(long long)a0;
- (void)setWakeScreen:(BOOL)a0;

@end
