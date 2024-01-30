@class NSString, ENGroupID;

@interface IDSCloudKitKeyElectionStoreItem : NSObject

@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) ENGroupID *groupID;

- (void).cxx_destruct;
- (id)description;

@end
