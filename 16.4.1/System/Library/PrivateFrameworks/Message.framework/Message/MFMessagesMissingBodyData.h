@class NSArray, NSIndexSet;

@interface MFMessagesMissingBodyData : NSObject

@property (readonly, copy, nonatomic) NSArray *messagesMissingBodyData;
@property (readonly, copy, nonatomic) NSIndexSet *messagesNotMissingBodyData;
@property (readonly, copy, nonatomic) NSIndexSet *fragmentedMessages;

- (void).cxx_destruct;

@end
