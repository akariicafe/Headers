@class EDAMNotFoundException, EDAMUserException, EDAMUserIdentity;

@interface EDAMManageNotebookSharesError : FATObject

@property (retain, nonatomic) EDAMUserIdentity *userIdentity;
@property (retain, nonatomic) EDAMUserException *userException;
@property (retain, nonatomic) EDAMNotFoundException *notFoundException;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
