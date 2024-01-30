@class NSData, NSString;

@interface FTMutableUserLanguageProfile : FTUserLanguageProfile

@property (copy, nonatomic) NSData *profile_blob;
@property (copy, nonatomic) NSString *profile_blob_version;
@property (copy, nonatomic) NSString *profile_checksum;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)profile_blob:(id /* block */)a0;

@end
