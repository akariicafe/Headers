@class NSString, AFExperimentState, NSDate;

@interface _AFExperimentStateMutation : NSObject <AFExperimentStateMutating> {
    AFExperimentState *_baseModel;
    NSDate *_lastSyncDate;
    BOOL _didEnd;
    NSString *_endingGroupIdentifier;
    NSString *_version;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLastSyncDate : 1; unsigned char hasDidEnd : 1; unsigned char hasEndingGroupIdentifier : 1; unsigned char hasVersion : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setDidEnd:(BOOL)a0;
- (void)setVersion:(id)a0;
- (void)setEndingGroupIdentifier:(id)a0;
- (void)setLastSyncDate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
