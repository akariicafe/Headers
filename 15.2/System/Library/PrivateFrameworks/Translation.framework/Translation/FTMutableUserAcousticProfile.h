@class NSString, NSData;

@interface FTMutableUserAcousticProfile : FTUserAcousticProfile

@property (copy, nonatomic) NSString *acoustic_profile_version;
@property (copy, nonatomic) NSData *acoustic_profile_blob;
@property (copy, nonatomic) NSString *profile_checksum;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acoustic_profile_blob:(id /* block */)a0;

@end
