@class NSString, NSNumber, NSDictionary;

@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *genreID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGenre:(id)a0 genreID:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
