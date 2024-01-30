@class NSString, NSArray;

@interface EDAMManageNoteSharesParameters : FATObject

@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) NSArray *membershipsToUpdate;
@property (retain, nonatomic) NSArray *invitationsToUpdate;
@property (retain, nonatomic) NSArray *membershipsToUnshare;
@property (retain, nonatomic) NSArray *invitationsToUnshare;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
