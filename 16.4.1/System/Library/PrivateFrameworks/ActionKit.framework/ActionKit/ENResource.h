@class NSString, NSData, NSDictionary;

@interface ENResource : NSObject

@property (copy, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSData *dataHash;
@property (retain, nonatomic) NSDictionary *edamAttributes;
@property (copy, nonatomic) NSString *guid;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *mediaTag;

+ (id)resourceWithServiceResource:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 mimeType:(id)a1 filename:(id)a2;
- (id)EDAMResource;
- (id)initWithData:(id)a0 mimeType:(id)a1;

@end
