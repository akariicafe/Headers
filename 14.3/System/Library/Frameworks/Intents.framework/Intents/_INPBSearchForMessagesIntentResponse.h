@class NSArray, NSString;

@interface _INPBSearchForMessagesIntentResponse : PBCodable <_INPBSearchForMessagesIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *messages;
@property (readonly, nonatomic) unsigned long long messagesCount;
@property (copy, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) unsigned long long searchResultsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)messagesType;
+ (Class)searchResultsType;

- (void)addMessages:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearMessages;
- (id)initWithCoder:(id)a0;
- (void)clearSearchResults;
- (void)writeTo:(id)a0;
- (id)messagesAtIndex:(unsigned long long)a0;
- (void)addSearchResults:(id)a0;
- (id)searchResultsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
