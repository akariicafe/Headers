@class NSString;

@interface SRTextInputSession : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double duration;
@property long long sessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textInputSessionWithDuration:(double)a0 sessionType:(long long)a1;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
