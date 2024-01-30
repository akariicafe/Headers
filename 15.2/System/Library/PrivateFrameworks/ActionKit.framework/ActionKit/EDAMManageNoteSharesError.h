@class NSNumber, EDAMUserException, EDAMNotFoundException;

@interface EDAMManageNoteSharesError : FATObject

@property (retain, nonatomic) NSNumber *identityID;
@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) EDAMUserException *userException;
@property (retain, nonatomic) EDAMNotFoundException *notFoundException;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
