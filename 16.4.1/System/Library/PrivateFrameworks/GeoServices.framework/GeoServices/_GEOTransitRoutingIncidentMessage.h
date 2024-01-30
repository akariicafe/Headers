@class NSString, NSArray, GEOPBTransitRoutingIncidentMessage;

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage, NSSecureCoding> {
    GEOPBTransitRoutingIncidentMessage *_routingIncidentMessage;
    NSArray *_transitIncidents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *routingMessage;
@property (readonly, nonatomic) NSArray *transitIncidents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_fakeTransitLineIncidentInLine:(id)a0;
- (void)_populateTransitIncidentsWithDecoderData:(id)a0;
- (id)initFakeLineIncidentMessageInLine:(id)a0;
- (id)initWithIncidentMessage:(id)a0 decoderData:(id)a1;
- (id)initWithIncidentMessageIndex:(unsigned long long)a0 decoderData:(id)a1;

@end
