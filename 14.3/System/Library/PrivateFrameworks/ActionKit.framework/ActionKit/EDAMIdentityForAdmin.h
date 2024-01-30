@class EDAMIdentity, NSNumber;

@interface EDAMIdentityForAdmin : FATObject

@property (retain, nonatomic) EDAMIdentity *identity;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *stateChanged;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
