@class NSArray, IMAPAccount;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject

@property (copy) NSArray *urls;
@property (copy) NSArray *paths;
@property (retain) IMAPAccount *account;

- (void).cxx_destruct;

@end
