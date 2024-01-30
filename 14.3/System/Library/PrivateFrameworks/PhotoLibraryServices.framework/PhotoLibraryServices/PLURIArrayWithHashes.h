@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject

@property (nonatomic) struct __CFArray { } *uris;
@property (nonatomic) struct __CFArray { } *hashes;
@property (retain, nonatomic) NSMutableArray *attributeValues;
@property (retain, nonatomic) NSMutableArray *relationshipValues;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isUpdate;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initForUpdates:(BOOL)a0;

@end
