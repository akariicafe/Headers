@class NSData, NSString, NSArray;

@interface CNGroupIdentity : NSObject <NSCopying>

@property (retain, nonatomic) NSData *groupPhoto;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) long long numberOfContacts;
@property (readonly, nonatomic) NSString *identifier;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initGroupWithName:(id)a0 photo:(id)a1 contacts:(id)a2;
- (void)updateGroupPhoto:(id)a0;
- (void)updateContacts:(id)a0;
- (id)initGroupWithName:(id)a0 photo:(id)a1 contacts:(id)a2 identifier:(id)a3;
- (void).cxx_destruct;
- (void)updateGroupName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
