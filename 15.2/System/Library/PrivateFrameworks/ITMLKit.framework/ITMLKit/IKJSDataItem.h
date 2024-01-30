@class NSDictionary, NSString;

@interface IKJSDataItem : IKJSDataObservable <NSObject, IKJSDataItem, _IKJSDataItemProxy, _IKJSDataItem> {
    NSString *_type;
}

@property (readonly, nonatomic) NSDictionary *dataDictionary;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *prototypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *type;

+ (id)makeDataItem:(id)a0 :(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(id)a0 identifier:(id)a1;
- (id)initWithType:(id)a0;
- (id)initWithValue:(id)a0;
- (id)asPrivateIKJSDataItem;

@end
