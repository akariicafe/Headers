@class NSArray, IDSCKServerChangeToken;

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) IDSCKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
