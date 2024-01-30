@class NSString;

@interface CRKBLBookItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *legacyUniqueIdentifier;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)description;

@end
