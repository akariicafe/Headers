@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject

@property (retain, nonatomic) NSData *hierarchyData;

- (void).cxx_destruct;
- (id)initWithHierarchyData:(id)a0;
- (id)decodeHierarchyWithContainer:(id)a0 error:(id *)a1;

@end
