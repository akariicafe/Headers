@class NSString, AFApplicationContextSnapshot, NSArray;

@interface _AFApplicationContextSnapshotMutation : NSObject <AFApplicationContextSnapshotMutating> {
    AFApplicationContextSnapshot *_baseModel;
    NSArray *_applicationContexts;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasApplicationContexts : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setApplicationContexts:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
