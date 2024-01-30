@class NSNumber, NSString;

@interface EDAMUserIdentity : FATObject

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *stringIdentifier;
@property (retain, nonatomic) NSNumber *longIdentifier;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
