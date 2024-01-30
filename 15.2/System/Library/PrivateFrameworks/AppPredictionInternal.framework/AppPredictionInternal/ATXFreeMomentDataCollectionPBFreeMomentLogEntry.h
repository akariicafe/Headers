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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
