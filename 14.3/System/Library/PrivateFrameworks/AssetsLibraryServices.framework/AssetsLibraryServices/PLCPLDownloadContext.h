@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject

@property (retain) NSString *taskIdentifier;
@property (retain) NSString *resourceTypeDescription;
@property double progress;
@property BOOL completed;
@property (retain) NSError *error;
@property double updateLastQueuedTime;

- (void).cxx_destruct;
- (id)description;
- (void)updateFromDownloadStatusUserInfo:(id)a0;

@end
