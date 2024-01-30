@class NSString, SASPresentationState;

@interface _SASPresentationStateMutation : NSObject <SASPresentationStateMutating> {
    SASPresentationState *_baseModel;
    NSString *_presentationIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPresentationIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPresentationIdentifier:(id)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
