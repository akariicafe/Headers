@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
