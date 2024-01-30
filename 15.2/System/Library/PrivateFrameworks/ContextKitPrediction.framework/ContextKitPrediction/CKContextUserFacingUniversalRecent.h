@class BMUserActivityMetadataEvent;

@interface CKContextUserFacingUniversalRecent : NSObject <NSCopying>

@property (retain, nonatomic) BMUserActivityMetadataEvent *event;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
