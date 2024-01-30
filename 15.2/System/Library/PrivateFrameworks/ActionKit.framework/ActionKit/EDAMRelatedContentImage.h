@class NSString, NSNumber;

@interface EDAMRelatedContentImage : FATObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *pixelRatio;
@property (retain, nonatomic) NSNumber *fileSize;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
