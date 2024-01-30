@class NSString, NSArray, AFMultiUserStateSnapshot, NSNumber;

@interface _AFMultiUserStateSnapshotMutation : NSObject <AFMultiUserStateSnapshotMutating> {
    AFMultiUserStateSnapshot *_baseModel;
    NSNumber *_vtSatScore;
    NSArray *_confidenceScores;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasVtSatScore : 1; unsigned char hasConfidenceScores : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVtSatScore:(id)a0;
- (void)setConfidenceScores:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (id)initWithBaseModel:(id)a0;

@end
