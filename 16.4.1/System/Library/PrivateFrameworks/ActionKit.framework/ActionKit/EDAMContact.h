@class NSString, NSNumber, NSData;

@interface EDAMContact : FATObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) NSData *messagingPermit;
@property (retain, nonatomic) NSNumber *messagingPermitExpires;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
