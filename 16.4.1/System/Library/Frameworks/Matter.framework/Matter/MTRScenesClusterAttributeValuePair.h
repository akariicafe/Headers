@class NSNumber, NSArray;

@interface MTRScenesClusterAttributeValuePair : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSArray *attributeValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
