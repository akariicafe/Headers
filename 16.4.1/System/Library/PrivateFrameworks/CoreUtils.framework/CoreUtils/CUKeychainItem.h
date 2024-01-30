@class NSString, NSDictionary, NSArray, NSDate, NSData;

@interface CUKeychainItem : NSObject

@property (copy, nonatomic) NSString *accessGroup;
@property (nonatomic) int accessibleType;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL invisible;
@property (nonatomic) BOOL legacy;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSArray *removedMetadata;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *persistentRef;
@property (copy, nonatomic) NSDictionary *secrets;
@property (nonatomic) int syncType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *userDescription;
@property (copy, nonatomic) NSString *viewHint;

- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_attributesDictionaryWithFlags:(unsigned int)a0 error:(id *)a1;
- (void)_mergeItem:(id)a0;
- (BOOL)_updateWithAttributesDictionary:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (BOOL)isEqualToKeychainItem:(id)a0 flags:(unsigned int)a1;

@end
