@class NSData, NSString;
@protocol NSObject;

@interface IDSSocketPairMessage : NSObject

@property (readonly, nonatomic) unsigned char command;
@property (readonly, nonatomic) NSData *underlyingData;
@property (readonly, nonatomic) unsigned long long underlyingDataLength;
@property (retain, nonatomic) id<NSObject> context;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) BOOL useDynamicServiceName;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL wasWrittenToConnection;

+ (unsigned int)dataLengthFromHeaderData:(id)a0;
+ (unsigned int)headerDataSize;
+ (id)messageWithCommand:(unsigned char)a0 data:(id)a1;
+ (id)messageWithData:(id)a0;
+ (id)messageWithHeaderData:(id)a0 data:(id)a1;

- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_existingUnderlyingData;
- (id)_nonHeaderData;

@end
