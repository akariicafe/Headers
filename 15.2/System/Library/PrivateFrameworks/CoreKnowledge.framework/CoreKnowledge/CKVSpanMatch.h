@class CKVSpanInfo, NSArray;

@interface CKVSpanMatch : NSObject <NSCopying>

@property (readonly, nonatomic) CKVSpanInfo *spanInfo;
@property (readonly, nonatomic) NSArray *fields;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSpanInfo:(id)a0 fields:(id)a1;
- (BOOL)isEqualToSpanMatch:(id)a0;

@end
