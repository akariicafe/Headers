@interface CTMMSEncoder : NSObject

+ (id)encodeMessage:(id)a0;
+ (id)decodeMessageFromData:(id)a0;
+ (id)decodeMessageFromData:(id)a0 data:(id)a1;
+ (id)decodeSmsFromData:(id)a0;
+ (id)decodeSmsFromData:(id)a0 data:(id)a1;
+ (id)encodeSms:(id)a0;

@end
