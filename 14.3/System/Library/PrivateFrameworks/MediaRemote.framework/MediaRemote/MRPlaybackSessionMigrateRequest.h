@class _MRPlaybackSessionMigrateRequestProtobuf, NSString, MRContentItem, MRPlaybackSessionRequest, NSError;

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {
    _MRPlaybackSessionMigrateRequestProtobuf *_protobuf;
    NSError *_migrateError;
    NSError *_fallbackError;
}

@property (nonatomic) unsigned int destinationTypes;
@property (nonatomic) long long playerOptions;
@property (nonatomic) long long endpointOptions;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long fallbackReason;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double playbackRate;
@property (nonatomic) long long playbackSessionSize;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRContentItem *contentItem;
@property (nonatomic) unsigned int originatorType;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *report;
@property (retain, nonatomic) MRPlaybackSessionRequest *playbackSessionRequest;
@property (nonatomic) BOOL allowFadeTransition;
@property (readonly, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *protobuf;

- (void)merge:(id)a0;
- (void)endEvent:(id)a0 withError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)addDestinationType:(unsigned int)a0;
- (void)setOriginatorTypeFromDevice:(id)a0;
- (void)addDestinationTypesFromDevices:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)endEvent:(id)a0;
- (id)description;
- (void)finalize;
- (id)initWithProtobuf:(id)a0;
- (void)startEvent:(id)a0;

@end
