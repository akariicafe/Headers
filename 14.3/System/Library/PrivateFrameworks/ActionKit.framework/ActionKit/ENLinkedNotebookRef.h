@class NSString;

@interface ENLinkedNotebookRef : NSObject <NSCoding>

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *sharedNotebookGlobalId;

+ (id)linkedNotebookRefFromLinkedNotebook:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
