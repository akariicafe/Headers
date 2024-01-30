@class NSString, NSDictionary;

@interface MLModelMetadata : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *versionString;
@property (readonly) NSString *author;
@property (readonly) NSString *license;
@property (readonly) NSDictionary *creatorDefined;

- (id)initWithName:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 shortDescription:(id)a1 versionString:(id)a2 author:(id)a3 license:(id)a4 creatorDefined:(id)a5;

@end
