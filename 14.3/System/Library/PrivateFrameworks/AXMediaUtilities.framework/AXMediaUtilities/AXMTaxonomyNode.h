@class NSString;

@interface AXMTaxonomyNode : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) double confidence;

- (void).cxx_destruct;

@end
