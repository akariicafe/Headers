@class NSString, IDSCKDatabase;

@interface IDSCKContainer : NSObject

@property (readonly) NSString *containerIdentifier;
@property (readonly, nonatomic) IDSCKDatabase *privateCloudDatabase;
@property (readonly, nonatomic) IDSCKDatabase *publicCloudDatabase;

+ (Class)__class;
+ (id)containerWithIdentifier:(id)a0;

- (void).cxx_destruct;

@end
