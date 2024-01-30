@class NSString, NSNumber;

@interface ATAccountInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSNumber *DSID;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
