@interface PETProtobufRawDecoder : NSObject

+ (id)filterProtobufData:(id)a0 onField:(id /* block */)a1 onNestedMessageEnd:(id /* block */)a2;
+ (id)filterProtobufData:(id)a0 withWhitelist:(id)a1;

@end
