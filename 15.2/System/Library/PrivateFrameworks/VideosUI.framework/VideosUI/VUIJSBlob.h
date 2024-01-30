@class NSData;

@interface VUIJSBlob : VUIJSObject <VUIJSBlob> {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
