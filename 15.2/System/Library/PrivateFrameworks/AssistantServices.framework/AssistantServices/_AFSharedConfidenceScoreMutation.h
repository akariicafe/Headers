@class NSString, AFSharedConfidenceScore;

@interface _AFSharedConfidenceScoreMutation : NSObject <AFSharedConfidenceScoreMutating> {
    AFSharedConfidenceScore *_baseModel;
    NSString *_sharedUserId;
    unsigned long long _confidenceScore;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSharedUserId : 1; unsigned char hasConfidenceScore : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setConfidenceScore:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setSharedUserId:(id)a0;

@end
