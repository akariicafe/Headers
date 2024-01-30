@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList

@property (nonatomic) int mediaType;
@property (retain, nonatomic) SAMPCollection *parentCollection;

+ (id)mediaEntityList;
+ (id)mediaEntityListWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
