@class NSString, NSDictionary, SFMediaMetadata, NSData;

@interface SFPlayMediaCommand : SFCommand <SFPlayMediaCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char playbackLocation : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFMediaMetadata *mediaMetadata;
@property (nonatomic) int playbackLocation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
