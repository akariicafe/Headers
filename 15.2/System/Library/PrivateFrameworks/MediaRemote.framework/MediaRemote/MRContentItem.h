@class NSData, NSString, NSArray, MRContentItemMetadata, MRArtwork, NSDictionary, _MRContentItemProtobuf;

@interface MRContentItem : NSObject <NSCopying> {
    MRContentItemMetadata *_metadata;
}

@property (readonly, nonatomic) _MRContentItemProtobuf *protobuf;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MRContentItemMetadata *metadata;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSArray *availableLanguageOptions;
@property (copy, nonatomic) NSArray *currentLanguageOptions;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (copy, nonatomic) NSString *ancestorIdentifier;
@property (copy, nonatomic) NSString *associatedParticipantIdentifier;
@property (copy, nonatomic) NSString *queueIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) MRArtwork *artwork;
@property (readonly, nonatomic) MRContentItem *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;

+ (id)mergeContentItems:(id)a0;
+ (id)extractedIdentifierFromNowPlayingInfo:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithNowPlayingInfo:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setNowPlayingInfo:(id)a0 policy:(unsigned char)a1 request:(id)a2;

@end
