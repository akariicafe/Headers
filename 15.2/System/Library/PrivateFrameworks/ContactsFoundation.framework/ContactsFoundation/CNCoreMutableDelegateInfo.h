@class NSNumber, NSString, NSPersonNameComponents;

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) BOOL isMe;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
