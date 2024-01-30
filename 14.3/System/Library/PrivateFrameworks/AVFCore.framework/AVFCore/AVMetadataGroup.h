@class NSString, NSArray;

@interface AVMetadataGroup : NSObject

@property (readonly, nonatomic) NSString *classifyingLabel;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSArray *items;

+ (void)initialize;

- (struct opaqueCMFormatDescription { } *)copyFormatDescription;

@end
