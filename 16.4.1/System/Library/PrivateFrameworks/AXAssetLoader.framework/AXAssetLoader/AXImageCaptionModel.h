@class NSString, NSDictionary;

@interface AXImageCaptionModel : NSObject {
    NSDictionary *_modelProperties;
}

@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *stage;
@property (readonly, nonatomic) NSString *language;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModelProperties:(id)a0;

@end
