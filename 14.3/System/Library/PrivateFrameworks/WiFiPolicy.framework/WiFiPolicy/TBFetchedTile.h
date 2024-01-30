@class NSString, NSDate;

@interface TBFetchedTile : NSObject <TBTile, NSCopying>

@property (nonatomic) unsigned long long key;
@property (copy, nonatomic) NSDate *created;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) unsigned long long networkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchedTileWithKey:(unsigned long long)a0 etag:(id)a1 created:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(unsigned long long)a0 etag:(id)a1 created:(id)a2;
- (BOOL)_isEqualToFetchedTile:(id)a0;

@end
