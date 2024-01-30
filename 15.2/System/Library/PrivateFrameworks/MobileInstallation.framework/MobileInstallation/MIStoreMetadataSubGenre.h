@class NSString, NSNumber, NSDictionary;

@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *genreID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithGenre:(id)a0 genreID:(id)a1;

@end
