@class geo_isolater, NSMutableDictionary;

@interface GEOLogFormatter : NSObject

@property (readonly, nonatomic) NSMutableDictionary *requestResponseCollector;
@property (readonly, nonatomic) geo_isolater *isolation;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)descriptionForPropertyListData:(id)a0 capturedStateType:(id)a1;
- (id)formattedStringForStructType:(id)a0 data:(id)a1;
- (id)formattedStringForStructType:(id)a0 value:(id)a1;
- (id)descriptionForCapturedState:(id)a0;
- (id)formattedStringForEnumType:(id)a0 value:(id)a1;
- (id)formattedStringForProtobufType:(id)a0 value:(id)a1;
- (id)formattedStringForRequestResponseType:(id)a0 value:(id)a1;
- (id)formattedAttributedStringForType:(id)a0 value:(id)a1;
- (id)formattedStringForStateType:(id)a0 data:(id)a1;
- (id)formattedStringForProtobufType:(id)a0 data:(id)a1;
- (id)formattedStringForPBCodableData:(id)a0;
- (id)formattedStringForRequestResponse:(id)a0;
- (id)formattedStringForSinglePartRequestResponse:(id)a0 compressed:(unsigned char)a1;
- (id)formattedStringForMultiPartRequestResponse:(id)a0 compressed:(unsigned char)a1;
- (id)formattedStringForRequestResponseMultipart:(id)a0 partData:(id)a1 className:(id)a2 compressed:(unsigned char)a3;
- (id)formattedStringForEnumType:(id)a0 number:(id)a1;
- (id)formattedStringForNumberType:(id)a0 unsignedLongLong:(unsigned long long)a1;

@end
