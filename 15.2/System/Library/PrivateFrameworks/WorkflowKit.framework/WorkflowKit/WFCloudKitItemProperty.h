@class NSString, NSValue, WFFileType;

@interface WFCloudKitItemProperty : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) Class itemClass;
@property (readonly, nonatomic, getter=isIgnoredByDefault) BOOL ignoredByDefault;
@property (readonly, nonatomic) NSValue *nilValue;
@property (readonly, nonatomic) WFFileType *fileType;

+ (id)scalarPropertyWithName:(id)a0 nilValue:(id)a1;
+ (id)scalarPropertyWithName:(id)a0 nilValue:(id)a1 ignoredByDefault:(BOOL)a2;
+ (id)objectPropertyWithName:(id)a0;
+ (id)objectPropertyWithName:(id)a0 ignoredByDefault:(BOOL)a1;
+ (id)assetPropertyWithName:(id)a0;
+ (id)assetPropertyWithName:(id)a0 fileType:(id)a1;
+ (id)assetPropertyWithName:(id)a0 fileType:(id)a1 ignoredByDefault:(BOOL)a2;
+ (id)itemReferencePropertyWithName:(id)a0 itemClass:(Class)a1;
+ (id)itemPropertyWithName:(id)a0 itemClass:(Class)a1;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 name:(id)a1 itemClass:(Class)a2 ignoredByDefault:(BOOL)a3 nilValue:(id)a4 fileType:(id)a5;

@end
