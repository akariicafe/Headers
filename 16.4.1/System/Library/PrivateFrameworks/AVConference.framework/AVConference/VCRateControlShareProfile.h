@interface VCRateControlShareProfile : NSObject <NSCopying>

@property (nonatomic) unsigned int reservedBitrate;
@property (nonatomic) unsigned int rateSharingCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
