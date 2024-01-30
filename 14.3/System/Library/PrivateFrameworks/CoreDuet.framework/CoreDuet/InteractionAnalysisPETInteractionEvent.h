@class NSString;

@interface InteractionAnalysisPETInteractionEvent : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_associatedMemberIDs;
    NSString *_bundleID;
    NSString *_direction;
    NSString *_eventMechanism;
    NSString *_interactionID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
