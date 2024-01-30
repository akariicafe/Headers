@class NSError, NSString;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {
    double _duration;
    double _endTimestamp;
    long long _errorCode;
    double _startTimestamp;
    NSString *_errorDescription;
    NSString *_name;
    struct { unsigned char duration : 1; unsigned char endTimestamp : 1; unsigned char errorCode : 1; unsigned char startTimestamp : 1; } _has;
}

@property (readonly, nonatomic) NSError *error;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (double)calculatedDuration;

@end
