@class NSString, PSIDate, NSDate;

@interface PSICollectionResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) PSIDate *startDate;
@property (readonly, nonatomic) PSIDate *endDate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, copy, nonatomic) NSDate *sortDate;

- (id)initWithUUID:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 subtitle:(id)a4 keyAssetUUID:(id)a5 type:(unsigned long long)a6 numberOfAssets:(unsigned long long)a7 sortDate:(id)a8;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
