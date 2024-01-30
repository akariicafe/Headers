@class NSString, NSArray, CNContact, NSSet;

@interface SGSqlEntityStoreCNContactMatcherHelper : NSObject {
    CNContact *_contact;
    NSSet *_nicks;
}

@property (readonly, nonatomic) NSString *prefilterNameMatchTerms;
@property (readonly, nonatomic) NSArray *weakNamePatterns;
@property (readonly, nonatomic) NSArray *strongNamePatterns;
@property (readonly, nonatomic) NSArray *emailTags;
@property (readonly, nonatomic) NSArray *phoneTags;
@property (readonly, nonatomic) NSArray *socialProfileTags;
@property (readonly, nonatomic) NSArray *addressTags;
@property (readonly, nonatomic) NSString *interactionContactIdentifier;
@property (readonly, nonatomic) BOOL isMe;

- (void).cxx_destruct;
- (id)initWithCNContact:(id)a0;

@end
