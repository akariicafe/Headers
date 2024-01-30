@class NSString, NSDictionary;

@interface DTTapStatusMessage : DTTapMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int status;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSString *notice;
@property (readonly, copy, nonatomic) NSDictionary *info;

- (void)setInfo:(id)a0;
- (void)setStatus:(unsigned int)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setNotice:(id)a0;
- (id)initWithStatus:(unsigned int)a0 timestamp:(unsigned long long)a1 notice:(id)a2 info:(id)a3;

@end
