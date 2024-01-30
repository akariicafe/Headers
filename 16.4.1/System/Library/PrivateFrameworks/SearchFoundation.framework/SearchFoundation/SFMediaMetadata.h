@class NSString, NSArray, NSDictionary, NSData;

@interface SFMediaMetadata : NSObject <SFMediaMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *mediaName;
@property (nonatomic) int mediaType;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *mediaPunchouts;
@property (copy, nonatomic) NSArray *bundleIdentifiersToExclude;
@property (copy, nonatomic) NSString *disambiguationTitle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasMediaType;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;

@end
