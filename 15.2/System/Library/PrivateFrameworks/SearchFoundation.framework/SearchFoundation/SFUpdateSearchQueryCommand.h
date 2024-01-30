@class NSString, NSDictionary, NSData;

@interface SFUpdateSearchQueryCommand : SFCommand <SFUpdateSearchQueryCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char querySource : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) int querySource;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
