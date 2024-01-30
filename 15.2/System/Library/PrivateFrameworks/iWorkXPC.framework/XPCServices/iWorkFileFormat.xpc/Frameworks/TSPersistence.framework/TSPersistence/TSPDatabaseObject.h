@class NSString, NSURL;

@interface TSPDatabaseObject : NSObject

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) int classType;
@property (readonly, nonatomic) BOOL hasDataState;
@property (readonly, nonatomic) long long dataState;
@property (readonly, nonatomic) BOOL hasFileState;
@property (readonly, nonatomic) NSString *fileState;
@property (readonly, nonatomic) NSURL *fileURL;

+ (id)databaseObjectWithIdentifier:(long long)a0 classType:(int)a1 dataState:(long long)a2;
+ (id)databaseObjectWithIdentifier:(long long)a0 classType:(int)a1 fileState:(id)a2 packageURL:(id)a3;

- (id)init;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1;

@end
