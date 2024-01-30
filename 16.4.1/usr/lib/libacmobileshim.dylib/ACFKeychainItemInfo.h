@class NSMutableDictionary, NSDictionary, NSString, NSDate, NSData;

@interface ACFKeychainItemInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *attributeDictionary;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) id classCode;
@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic) unsigned long long creator;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *subject;
@property (nonatomic) BOOL isInvisible;
@property (nonatomic) BOOL isNegative;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSData *generic;
@property (retain, nonatomic) id valueRef;
@property (retain, nonatomic) id valueData;
@property (retain, nonatomic) id valuePersistentRef;
@property (nonatomic) BOOL isPermanent;
@property (retain, nonatomic) id keyType;
@property (retain, nonatomic) NSData *applicationTag;
@property (copy, nonatomic) NSString *applicationTagString;
@property (nonatomic) void *accessibleType;
@property (nonatomic) BOOL synchronizable;
@property (retain) NSString *genericString;
@property BOOL returnData;
@property BOOL returnAttributes;
@property BOOL returnRef;
@property BOOL returnPersistentRef;
@property unsigned long long returnLimit;

+ (id)keychainItemInfoWithAttributes:(id)a0;
+ (id)keychainItemInfo;

- (void)dump;
- (id)initWithAttributes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (BOOL)isSynchronizableAttributeAvaiable;

@end
