@class NSString, PHPerson;

@interface PXCMMMomentsParticipant : PXRecipient {
    NSString *_additionalLocalizedName;
}

@property (readonly, nonatomic) PHPerson *person;

- (id)localizedName;
- (id)initWithPerson:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0 phoneNumber:(id)a1 localizedName:(id)a2;

@end
