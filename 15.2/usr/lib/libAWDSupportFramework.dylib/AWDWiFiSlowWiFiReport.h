@class AWDSlowWiFiNotification, NSMutableArray;

@interface AWDWiFiSlowWiFiReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSlowNotice;
@property (retain, nonatomic) AWDSlowWiFiNotification *slowNotice;
@property (retain, nonatomic) NSMutableArray *linkQualSamples;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)usbEventType;
+ (Class)linkQualSampleType;

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
- (void)addUsbEvent:(id)a0;
- (unsigned long long)usbEventsCount;
- (void)clearUsbEvents;
- (id)usbEventAtIndex:(unsigned long long)a0;
- (void)addLinkQualSample:(id)a0;
- (unsigned long long)linkQualSamplesCount;
- (void)clearLinkQualSamples;
- (id)linkQualSampleAtIndex:(unsigned long long)a0;

@end
