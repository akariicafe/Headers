@class NSArray;

@interface NNMKBatchRequestHandlerResult : NSObject

@property (retain, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) NSArray *mailboxesToTriggerFullSync;
@property (retain, nonatomic) NSArray *missingMessageHeaderIds;
@property (retain, nonatomic) NSArray *messageIdsForRequestingContentDownload;

- (void).cxx_destruct;

@end
