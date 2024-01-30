@class NSString;

@interface PKSharingIDSManagerHandlerConfiguration : NSObject

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) unsigned long long accessLevel;
@property (readonly, nonatomic) unsigned long long sharingGroup;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSharingGroup:(unsigned long long)a0;

@end
