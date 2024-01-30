@class NSArray, NSObject;
@protocol NSCopying;

@interface VUIMediaEntityGroup : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
