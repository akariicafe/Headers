@class NSString, NSDate;
@protocol ECMessage;

@interface _EDUserActionState : NSObject

@property (retain, nonatomic) NSDate *viewingStarted;
@property (retain, nonatomic) id<ECMessage> message;
@property (nonatomic) BOOL scrolledToEnd;
@property (nonatomic) BOOL mutedThread;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *cellStyle;
@property (copy, nonatomic) NSString *messageListType;
@property (nonatomic) long long row;

- (void).cxx_destruct;

@end
