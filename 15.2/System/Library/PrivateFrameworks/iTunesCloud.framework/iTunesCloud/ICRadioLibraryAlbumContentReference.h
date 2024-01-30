@class NSString, NSNumber;

@interface ICRadioLibraryAlbumContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSNumber *representativeCloudIdentifier;
@property (copy, nonatomic) NSNumber *storeIdentifier;

- (long long)contentType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)matchDictionary;
- (id)rawContentDictionary;

@end
