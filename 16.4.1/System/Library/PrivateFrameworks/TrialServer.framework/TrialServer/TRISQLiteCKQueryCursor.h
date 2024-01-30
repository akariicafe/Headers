@class CKQuery;

@interface TRISQLiteCKQueryCursor : NSObject <NSCopying>

@property (retain, nonatomic) CKQuery *query;
@property (nonatomic) unsigned long long offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
