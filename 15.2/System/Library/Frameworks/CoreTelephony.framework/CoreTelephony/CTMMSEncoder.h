@interface CTMMSEncoder : NSObject

+ (id)encodeSms:(id)a0;
+ (id)decodeSmsFromData:(id)a0;
+ (id)decodeMessageFromData:(id)a0;
+ (id)decodeSmsFromData:(id)a0 data:(id)a1;
+ (id)decodeMessageFromData:(id)a0 data:(id)a1;
+ (id)encodeMessage:(id)a0;

@end
