@class NSString;

@interface AWDSpringBoardSwitcherToAppTransition : PBCodable <NSCopying> {
    struct { unsigned char absoluteDistanceInList : 1; unsigned char timestamp : 1; unsigned char isGoingToHomeScreen : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSwitcherName;
@property (retain, nonatomic) NSString *switcherName;
@property (nonatomic) BOOL hasAbsoluteDistanceInList;
@property (nonatomic) unsigned long long absoluteDistanceInList;
@property (nonatomic) BOOL hasIsGoingToHomeScreen;
@property (nonatomic) BOOL isGoingToHomeScreen;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
