@class NSString, NSDictionary;

@interface MKBookmark : NSObject

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *data;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
