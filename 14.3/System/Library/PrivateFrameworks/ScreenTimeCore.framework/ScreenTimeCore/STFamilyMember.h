@class NSNumber, NSString;

@interface STFamilyMember : NSObject

@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL isParent;
@property (nonatomic) BOOL isOrganizer;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSString *memberType;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDSID:(id)a0 altDSID:(id)a1 appleID:(id)a2 memberType:(id)a3 firstName:(id)a4 lastName:(id)a5 isMe:(BOOL)a6 isParent:(BOOL)a7 isOrganizer:(BOOL)a8;

@end
