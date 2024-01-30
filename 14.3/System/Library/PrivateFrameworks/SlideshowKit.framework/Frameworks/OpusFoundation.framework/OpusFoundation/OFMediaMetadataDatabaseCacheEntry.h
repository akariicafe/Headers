@class NSString, OFMediaMetadataDatabaseCache, NSDate;

@interface OFMediaMetadataDatabaseCacheEntry : NSObject

@property BOOL isFault;
@property BOOL isDirty;
@property long long uniqueID;
@property (retain) OFMediaMetadataDatabaseCache *context;
@property (copy) NSString *identifier;
@property (retain) NSDate *creationDate;
@property (copy) NSString *name;

- (id)init;
- (void)cleanup;
- (void)save;
- (void)dealloc;
- (void)update;
- (id)initWithContext:(id)a0 andStatement:(struct sqlite3_stmt { } *)a1;
- (void)updateWithStatement:(struct sqlite3_stmt { } *)a0;

@end
