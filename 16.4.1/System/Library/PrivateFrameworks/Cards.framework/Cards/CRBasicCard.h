@class NSArray, NSSet, NSString, SFCard;

@interface CRBasicCard : NSObject <CRCard>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *cardSections;
@property (retain, nonatomic) NSSet *interactions;
@property (retain, nonatomic) NSArray *dismissalCommands;
@property (readonly, copy, nonatomic) NSString *cardIdentifier;
@property (readonly, nonatomic) unsigned long long cardFormat;
@property (readonly, nonatomic) BOOL asynchronous;
@property (readonly, nonatomic) BOOL flexibleSectionOrder;
@property (readonly, nonatomic) SFCard *backingCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
