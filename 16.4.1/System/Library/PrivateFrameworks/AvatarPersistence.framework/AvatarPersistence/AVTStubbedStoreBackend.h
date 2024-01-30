@class NSString;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@interface AVTStubbedStoreBackend : NSObject <AVTStoreBackend>

@property (weak, nonatomic) id<AVTStoreBackendDelegate> backendDelegate;
@property (readonly, nonatomic) id<AVTAvatarRecordChangeTracker> recordChangeTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarsForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)canCreateAvatarWithError:(id *)a0;
- (BOOL)deleteAvatarWithIdentifier:(id)a0 error:(id *)a1;
- (id)duplicateAvatarRecord:(id)a0 error:(id *)a1;
- (BOOL)saveAvatar:(id)a0 error:(id *)a1;
- (BOOL)saveAvatars:(id)a0 error:(id *)a1;

@end
