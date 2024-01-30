@class CKAtomLocation, CKDistributedTimestamp;

@interface CKAtomReference : NSObject <NSCopying>

@property (nonatomic) unsigned char type;
@property (retain, nonatomic) CKAtomLocation *location;
@property (retain, nonatomic) CKDistributedTimestamp *timestamp;

- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToReference:(id)a0;
- (id)initWithLocation:(id)a0 timestamp:(id)a1 type:(unsigned char)a2;

@end
