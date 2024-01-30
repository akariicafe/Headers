@class NSString;

@interface IDSCKRecordZoneID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *ownerName;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
