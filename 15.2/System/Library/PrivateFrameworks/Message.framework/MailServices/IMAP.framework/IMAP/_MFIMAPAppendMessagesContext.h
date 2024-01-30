@class MFMailMessageStore, NSArray, NSMutableArray;

@interface _MFIMAPAppendMessagesContext : NSObject {
    MFMailMessageStore *store;
    NSArray *messages;
    NSArray *flagsToSet;
    NSArray *customFlagsToSet;
    BOOL someMsgsWentToServer;
    NSMutableArray *msgsAppendedOffline;
    NSMutableArray *missedMessages;
    NSMutableArray *newMessageIDs;
    NSMutableArray *newMessages;
    unsigned int unreadCountDelta;
    unsigned int destUidNext;
}

- (void).cxx_destruct;

@end
