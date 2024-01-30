@class NSString, NTPBIssueData;

@interface NTPBIssueDownload : PBCodable <NSCopying> {
    struct { unsigned char downloadLocation : 1; unsigned char downloadState : 1; unsigned char downloadType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic) BOOL hasDownloadLocation;
@property (nonatomic) int downloadLocation;
@property (nonatomic) BOOL hasDownloadState;
@property (nonatomic) int downloadState;
@property (nonatomic) BOOL hasDownloadType;
@property (nonatomic) int downloadType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
