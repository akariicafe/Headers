@class BMUserActivityMetadataEvent;

@interface CKContextUserFacingUniversalRecent : NSObject <NSCopying>

@property (retain, nonatomic) BMUserActivityMetadataEvent *event;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
