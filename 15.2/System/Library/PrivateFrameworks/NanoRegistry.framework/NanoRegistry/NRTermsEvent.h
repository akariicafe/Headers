@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *termsDigest;
@property (nonatomic) BOOL flaggedForSend;
@property (nonatomic) BOOL writable;

+ (id)digestFromData:(id)a0;
+ (id)loadTermsWithPath:(id)a0;
+ (id)eventWithProtobuf:(id)a0;

- (id)initWithDeviceID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setEventType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setEventDate:(double)a0;
- (void)setPresentationReason:(id)a0;
- (id)termsText;
- (BOOL)isTermsAlreadyArchived;
- (void)saveTerms;
- (void)setTermsText:(id)a0;
- (void)setDocumentationID:(id)a0;
- (void)setPresentationLocation:(int)a0;
- (void)setAcknowledgedDeviceName:(id)a0;
- (void)setAcknowledgedDeviceSerialNumber:(id)a0;
- (void)setDisplayDeviceName:(id)a0;
- (void)setDisplayDeviceSerialNumber:(id)a0;
- (void)setLoggingProcessName:(id)a0;
- (void)saveEventTextToFileIfNeeded;
- (void)_setEventType:(unsigned long long)a0;
- (void)updateEventDate;
- (void)_setLoggingProcessName:(id)a0;

@end
