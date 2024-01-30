@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *mainEntitySemanticData;
@property (copy, nonatomic) NSURL *viewId;

+ (id)list;
+ (id)listWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
