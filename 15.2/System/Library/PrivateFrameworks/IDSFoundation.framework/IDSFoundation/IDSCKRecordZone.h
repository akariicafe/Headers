@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSCKRecordZoneID *zoneID;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
