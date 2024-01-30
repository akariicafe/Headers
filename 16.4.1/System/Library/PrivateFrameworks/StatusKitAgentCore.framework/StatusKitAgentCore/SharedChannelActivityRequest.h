@class ChannelActivityPollingRequest, ChannelActivityActivationRequest, ChannelActivityDeactivationRequest;

@interface SharedChannelActivityRequest : PBRequest <NSCopying> {
    struct { unsigned char request : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActivationRequest;
@property (retain, nonatomic) ChannelActivityActivationRequest *activationRequest;
@property (readonly, nonatomic) BOOL hasDeactivationRequest;
@property (retain, nonatomic) ChannelActivityDeactivationRequest *deactivationRequest;
@property (readonly, nonatomic) BOOL hasPollingRequest;
@property (retain, nonatomic) ChannelActivityPollingRequest *pollingRequest;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) int request;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsRequest:(id)a0;
- (void)clearOneofValuesForRequest;
- (id)requestAsString:(int)a0;

@end
