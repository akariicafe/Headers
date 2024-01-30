@class NSString, NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    NSString *_name;
    NSArray *_elements;
    NSEntityDescription *_entity;
    NSPredicate *_partialIndexPredicate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSArray *elements;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (copy) NSPredicate *partialIndexPredicate;

- (id)initWithName:(id)a0 predicate:(id)a1 elements:(id)a2 entity:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 elements:(id)a1;
- (BOOL)_isEditable;
- (void)_throwIfNotEditable;
- (void)encodeWithCoder:(id)a0;

@end
