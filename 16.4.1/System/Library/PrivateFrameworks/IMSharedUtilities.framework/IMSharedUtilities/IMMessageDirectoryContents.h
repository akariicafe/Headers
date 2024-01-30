@class NSArray, IMDirectoryContents, IMCombinedDirectoryContents;

@interface IMMessageDirectoryContents : NSObject

@property (readonly, nonatomic) NSArray *directoryContents;
@property (readonly, nonatomic) IMDirectoryContents *messagesDirectoryContents;
@property (readonly, nonatomic) IMDirectoryContents *metaDataDirectoryContents;
@property (readonly, nonatomic) IMCombinedDirectoryContents *allDirectoryContents;
@property (nonatomic) BOOL needsGathering;

- (id)init;
- (void).cxx_destruct;
- (BOOL)gatherIfNeeded;
- (void)gather;

@end
