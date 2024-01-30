@class NSArray, NSObject;
@protocol NSCopying;

@interface VUIMediaEntityGroup : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
