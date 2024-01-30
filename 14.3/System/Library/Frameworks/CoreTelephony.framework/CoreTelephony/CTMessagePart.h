@class NSString, NSData, NSMutableDictionary;

@interface CTMessagePart : NSObject {
    NSMutableDictionary *_contentTypeParams;
}

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *contentLocation;
@property (copy, nonatomic) NSData *data;

- (void)addContentTypeParameterWithName:(id)a0 value:(id)a1;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)allContentTypeParameterNames;
- (void).cxx_destruct;
- (id)contentTypeParameterWithName:(id)a0;

@end
