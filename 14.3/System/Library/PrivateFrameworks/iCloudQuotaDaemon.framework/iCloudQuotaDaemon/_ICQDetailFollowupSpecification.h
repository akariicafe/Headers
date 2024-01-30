@class NSDictionary, NSString;

@interface _ICQDetailFollowupSpecification : _ICQFollowupSpecification

@property (retain, nonatomic) NSDictionary *lockScreenInfo;
@property (retain, nonatomic) NSDictionary *followUpInfo;
@property (retain, nonatomic) NSDictionary *mesgTemplates;
@property (retain, nonatomic) NSDictionary *titleTemplates;
@property (retain, nonatomic) NSDictionary *followupMesgTemplates;
@property (retain, nonatomic) NSDictionary *followupTitleTemplates;
@property (retain, nonatomic) NSString *bundleId;

+ (id)replaceWordsIn:(id)a0 with:(id)a1;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;
- (void)postFollowupWithController:(id)a0 completion:(id /* block */)a1;
- (id)titleWithKey:(id)a0;
- (id)mesgWithKey:(id)a0;

@end
