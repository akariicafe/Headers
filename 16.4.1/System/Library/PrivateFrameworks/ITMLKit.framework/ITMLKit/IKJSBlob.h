@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
