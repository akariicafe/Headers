@class NSString, NSArray;
@protocol SFCardSection;

@interface CRBasicCardSection : NSObject <CRCardSection>

@property (retain, nonatomic) id<SFCardSection> backingCardSection;
@property (readonly, nonatomic) NSString *cardSectionIdentifier;
@property (readonly, nonatomic) NSArray *actionCommands;
@property (readonly, nonatomic) BOOL hasNextCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)basicCardSectionWithBackingCardSection:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
