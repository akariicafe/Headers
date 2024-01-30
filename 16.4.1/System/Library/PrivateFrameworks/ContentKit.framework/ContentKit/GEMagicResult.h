@class NSString, NSArray;

@interface GEMagicResult : NSObject

@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, copy, nonatomic) NSString *uniformType;
@property (readonly, copy, nonatomic) NSArray *uniformTypeHierarchy;

- (void)dealloc;
- (id)initWithMimeType:(id)a0 description:(id)a1 typeHierarchy:(id)a2;

@end
