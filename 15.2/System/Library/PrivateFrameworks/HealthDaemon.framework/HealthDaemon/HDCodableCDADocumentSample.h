@class NSString, HDCodableSample, NSData;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char omittedContent : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasOmittedContent;
@property (nonatomic) int omittedContent;
@property (readonly, nonatomic) BOOL hasDocumentData;
@property (retain, nonatomic) NSData *documentData;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPatientName;
@property (retain, nonatomic) NSString *patientName;
@property (readonly, nonatomic) BOOL hasAuthorName;
@property (retain, nonatomic) NSString *authorName;
@property (readonly, nonatomic) BOOL hasCustodianName;
@property (retain, nonatomic) NSString *custodianName;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;
- (id)omittedContentAsString:(int)a0;
- (int)StringAsOmittedContent:(id)a0;

@end
