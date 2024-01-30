@interface WFJSONStructureLeafNode : NSObject

@property (nonatomic, getter=isRequired) BOOL required;

+ (id)optionalLeafNode;
+ (id)requiredLeafNode;

@end
