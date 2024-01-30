@class NSString, NSArray, NSDictionary;

@interface PXStoryColorGradingCubeInfo : NSObject {
    NSDictionary *_backingDict;
}

@property (readonly, nonatomic) NSString *resource;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *tier;
@property (readonly, nonatomic) BOOL isAutoSelectable;
@property (readonly, nonatomic) BOOL isUserSelectable;
@property (readonly, nonatomic) NSArray *categories;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
