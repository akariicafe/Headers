@class NSString, MSASInvitation;

@interface MSASAlbumChange : NSObject

@property (copy, nonatomic) NSString *ownerEmail;
@property (copy, nonatomic) NSString *ownerPersonID;
@property (copy, nonatomic) NSString *ownerFullName;
@property (copy, nonatomic) NSString *ownerFirstName;
@property (copy, nonatomic) NSString *ownerLastName;
@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL wasDeleted;
@property (retain, nonatomic) MSASInvitation *invitation;

- (void).cxx_destruct;
- (id)description;

@end
