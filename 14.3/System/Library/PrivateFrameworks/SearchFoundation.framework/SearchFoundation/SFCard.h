@class NSString, NSArray, NSData, NSURL, NSDictionary;

@interface SFCard : NSObject <SFCard, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; unsigned char source : 1; unsigned char queryId : 1; unsigned char flexibleSectionOrder : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, getter=_originalCardData, setter=_setOriginalCardData:) NSData *originalCardData;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (copy, nonatomic) NSURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) BOOL flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasSource;
- (BOOL)hasType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)a0;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasQueryId;
- (BOOL)hasFlexibleSectionOrder;
- (void)encodeWithCoder:(id)a0;

@end
