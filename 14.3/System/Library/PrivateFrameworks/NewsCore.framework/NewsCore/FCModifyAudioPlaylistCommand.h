@interface FCModifyAudioPlaylistCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithItems:(id)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
