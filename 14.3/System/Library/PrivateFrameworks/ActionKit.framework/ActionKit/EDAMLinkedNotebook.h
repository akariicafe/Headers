@class NSString, NSNumber;

@interface EDAMLinkedNotebook : FATObject

@property (retain, nonatomic) NSString *shareName;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *sharedNotebookGlobalId;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;
@property (retain, nonatomic) NSString *stack;
@property (retain, nonatomic) NSNumber *businessId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
