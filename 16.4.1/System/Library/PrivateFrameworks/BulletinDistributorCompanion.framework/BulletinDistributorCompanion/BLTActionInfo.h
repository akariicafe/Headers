@class NSString, NSDictionary;

@interface BLTActionInfo : NSObject <BSDescriptionProviding>

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *publisherBulletinID;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionType:(long long)a0 publisherBulletinID:(id)a1 recordID:(id)a2 sectionID:(id)a3 context:(id)a4;

@end
