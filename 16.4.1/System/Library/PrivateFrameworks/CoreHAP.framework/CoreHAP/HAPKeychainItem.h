@class NSString, NSData, NSDate, NSNumber;

@interface HAPKeychainItem : HMFObject <NSMutableCopying>

@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSData *valueData;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, nonatomic, getter=isInvisible) BOOL invisible;
@property (nonatomic) void *platformReference;
@property (retain, nonatomic) NSData *genericData;
@property (retain, nonatomic) NSString *viewHint;
@property (retain, nonatomic) NSDate *creationDate;

+ (BOOL)isQueryResultValid:(struct __CFDictionary { } *)a0 shouldIncludeData:(BOOL)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)matchesPublicKeyData:(id)a0;
- (id)initWithQueryResult:(struct __CFDictionary { } *)a0 shouldIncludeData:(BOOL)a1;
- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;

@end
