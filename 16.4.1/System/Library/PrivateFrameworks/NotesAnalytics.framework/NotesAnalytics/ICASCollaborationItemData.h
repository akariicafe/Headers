@class NSString, ICASCollaborationItemType;

@interface ICASCollaborationItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASCollaborationItemType *collaborationItemType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCollaborationItemType:(id)a0;

@end
