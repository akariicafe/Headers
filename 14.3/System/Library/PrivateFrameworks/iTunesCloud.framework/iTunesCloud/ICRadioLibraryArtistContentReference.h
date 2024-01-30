@class NSString, NSNumber;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *representativeCloudIdentifier;
@property (copy, nonatomic) NSNumber *storeIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)contentType;
- (id)initWithCoder:(id)a0;
- (id)rawContentDictionary;
- (id)matchDictionary;
- (void)encodeWithCoder:(id)a0;

@end
