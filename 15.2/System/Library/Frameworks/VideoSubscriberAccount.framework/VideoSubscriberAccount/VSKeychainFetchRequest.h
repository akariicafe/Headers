@class NSPredicate, VSOptional, NSArray;

@interface VSKeychainFetchRequest : NSObject <NSCopying>

@property (retain, nonatomic) VSOptional *itemKind;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) BOOL includesDataValues;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
