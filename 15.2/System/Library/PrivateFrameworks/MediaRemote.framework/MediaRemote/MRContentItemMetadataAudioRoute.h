@class NSString, _MRAudioRouteProtobuf, NSDictionary;

@interface MRContentItemMetadataAudioRoute : NSObject <NSCopying>

@property (readonly, nonatomic) _MRAudioRouteProtobuf *protobuf;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSupportsSpatialization;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic) BOOL hasSpatializationEnabled;
@property (nonatomic, getter=isSpatializationEnabled) BOOL spatializationEnabled;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
