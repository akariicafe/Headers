@class NSString, NSArray;

@interface RTAccount : NSObject

@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) BOOL primaryEmailVerified;
@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *primaryEmail;
@property (retain, nonatomic) NSString *appleIDAlias;
@property (retain, nonatomic) NSArray *appleIDAliases;

- (id)description;
- (id)appleIDs;
- (void).cxx_destruct;
- (id)init;
- (id)initWithACAccount:(id)a0;

@end
