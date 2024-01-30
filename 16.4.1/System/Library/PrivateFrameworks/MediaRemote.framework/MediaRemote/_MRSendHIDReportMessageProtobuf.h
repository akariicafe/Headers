@class NSString, NSData;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVirtualDeviceID;
@property (retain, nonatomic) NSString *virtualDeviceID;
@property (readonly, nonatomic) BOOL hasReport;
@property (retain, nonatomic) NSData *report;

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
