@class NSArray, NSDictionary, NSData;

@interface BCImageStore : NSObject {
    NSData *_data;
}

@property (retain, nonatomic) NSArray *rawArray;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)initWithImages:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
