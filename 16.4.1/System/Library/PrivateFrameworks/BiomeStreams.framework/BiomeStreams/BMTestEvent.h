@class NSString;

@interface BMTestEvent : BMEventBase <BMStoreData, NSSecureCoding> {
    struct { unsigned int dataVersion; unsigned int content; } _data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (void)encodeWithCoder:(id)a0;
- (unsigned int)content;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithContent:(unsigned int)a0 dataVersion:(unsigned int)a1;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1;

@end
