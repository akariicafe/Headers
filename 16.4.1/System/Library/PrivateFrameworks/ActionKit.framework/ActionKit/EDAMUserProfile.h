@class NSNumber, NSString, EDAMBusinessUserAttributes;

@interface EDAMUserProfile : FATObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) EDAMBusinessUserAttributes *attributes;
@property (retain, nonatomic) NSNumber *joined;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *role;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
