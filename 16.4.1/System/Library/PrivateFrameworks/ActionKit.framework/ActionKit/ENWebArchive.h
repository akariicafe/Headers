@class NSArray, ENWebResource;

@interface ENWebArchive : NSObject

@property (retain, nonatomic) ENWebResource *mainResource;
@property (retain, nonatomic) NSArray *subresources;
@property (retain, nonatomic) NSArray *subframeArchives;

+ (id)webArchiveWithData:(id)a0;
+ (id)webArchiveWithDictionary:(id)a0;

- (id)propertyList;
- (id)data;
- (void).cxx_destruct;
- (id)initWithMainResource:(id)a0 subresources:(id)a1 subframeArchives:(id)a2;

@end
