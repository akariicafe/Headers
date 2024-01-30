@class NSString, NSDictionary, NSData;

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
