@class NSString, NSArray;

@interface WLGroupMessageInfo : NSObject

@property (readonly, nonatomic) NSString *sourceThreadID;
@property (readonly, nonatomic) NSArray *sortedHandleIDs;
@property (readonly, nonatomic) BOOL handleIDsAreComplete;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) NSString *groupID;

+ (id)groupMessageInfoWithSourceThreadID:(id)a0 sortedHandleIDs:(id)a1 handleIDsAreComplete:(BOOL)a2 roomName:(id)a3 groupID:(id)a4;

- (void).cxx_destruct;

@end
