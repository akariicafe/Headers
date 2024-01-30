@class NSArray, CNMutableContact;

@interface CNUIContactSaveResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) CNMutableContact *contact;
@property (readonly, nonatomic) NSArray *identifiersOfIssuedSaveRequests;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 contact:(id)a1 identifiersOfIssuedSaveRequests:(id)a2;

@end
