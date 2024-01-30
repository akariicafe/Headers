@class NSError, NSArray;

@interface CNUIGroupsAndContainersContactsSaveResult : NSObject

@property (readonly, nonatomic) BOOL saveDidSucceed;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *addedContacts;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1 addedContacts:(id)a2;

@end
