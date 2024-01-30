@class NSArray, NSData;

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSArray *containerItems;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) long long originatorType;
@property (readonly, nonatomic) long long originatorVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)containerItemFollowingContainerItem:(id)a0;
- (id)contextByInsertingContainerItem:(id)a0 afterContainerItem:(id)a1;
- (id)contextByRemovingContainerItem:(id)a0;

@end
