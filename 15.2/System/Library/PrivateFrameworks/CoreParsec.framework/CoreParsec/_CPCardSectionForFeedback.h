@class NSString, NSArray, NSData;

@interface _CPCardSectionForFeedback : PBCodable <_CPCardSectionForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *actionTarget;
@property (copy, nonatomic) NSString *actionDestination;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) int commandType;
@property (copy, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSArray *cardSections;
@property (nonatomic) int cardSectionType;
@property (copy, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)addCardSections:(id)a0;
- (void)clearCardSections;
- (unsigned long long)cardSectionsCount;
- (id)cardSectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (void)addButtons:(id)a0;
- (id)buttonsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;

@end
