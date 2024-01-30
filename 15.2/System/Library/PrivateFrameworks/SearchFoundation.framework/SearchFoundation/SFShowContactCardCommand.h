@class NSString, NSDictionary, NSData;

@interface SFShowContactCardCommand : SFCommand <SFShowContactCardCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char isSuggestedContact : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL isSuggestedContact;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
