@class NSString, NSDictionary, NSData, SFTopic;

@interface SFToggleAudioCommand : SFCommand <SFToggleAudioCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaEntityType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *universalLibraryIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMediaEntityType;

@end
