@interface FCModifyAudioPlaylistCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)initWithItems:(id)a0 merge:(BOOL)a1;

@end
