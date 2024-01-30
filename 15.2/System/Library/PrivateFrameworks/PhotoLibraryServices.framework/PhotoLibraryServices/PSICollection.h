@class NSString, PSIAsset, PSIDate, NSDate;

@interface PSICollection : PSIObject <NSCopying>

@property (readonly) PSIDate *startDate;
@property (readonly) PSIDate *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PSIAsset *keyAsset;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) NSDate *sortDate;

- (id)_initForCopy:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 subtitle:(id)a4 keyAsset:(id)a5 type:(unsigned long long)a6 numberOfAssets:(unsigned long long)a7 sortDate:(id)a8;

@end
