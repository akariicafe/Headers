@class NSString;

@interface IDSCKRecordZoneID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *ownerName;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
