@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerEmail;
- (id)cloudGUID;
- (BOOL)cloudOwnerIsWhitelisted;

@end
