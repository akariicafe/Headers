@class NSString, SFSymbolImage, NSDictionary, NSData;

@interface SFPerformEntityQueryCommand : SFCommand <SFPerformEntityQueryCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *tokenString;
@property (retain, nonatomic) SFSymbolImage *symbolImage;
@property (nonatomic) int entityType;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
