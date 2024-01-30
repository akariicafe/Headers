@interface WFJSONStructureLeafNode : NSObject

@property (nonatomic, getter=isRequired) BOOL required;

+ (id)requiredLeafNode;
+ (id)optionalLeafNode;

@end
