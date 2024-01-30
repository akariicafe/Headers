@class NSString, ATXFreeMomentDataCollectionPBFeatureVector;

@interface ATXFreeMomentDataCollectionPBFreeMomentLogEntry : PBCodable <NSCopying> {
    struct { unsigned char isStaleNotification : 1; unsigned char userResponse : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserFeatureVector;
@property (retain, nonatomic) ATXFreeMomentDataCollectionPBFeatureVector *userFeatureVector;
@property (readonly, nonatomic) BOOL hasFreeMomentReason;
@property (retain, nonatomic) NSString *freeMomentReason;
@property (nonatomic) BOOL hasUserResponse;
@property (nonatomic) BOOL userResponse;
@property (readonly, nonatomic) BOOL hasUserFeedback;
@property (retain, nonatomic) NSString *userFeedback;
@property (nonatomic) BOOL hasIsStaleNotification;
@property (nonatomic) BOOL isStaleNotification;

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

@end
