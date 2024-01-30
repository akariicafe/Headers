@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *termsDigest;
@property (nonatomic) BOOL flaggedForSend;
@property (nonatomic) BOOL writable;

+ (id)digestFromData:(id)a0;
+ (id)eventWithProtobuf:(id)a0;
+ (id)loadTermsWithPath:(id)a0;

- (void)setEventType:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setEventDate:(double)a0;
- (void)updateEventDate;
- (void)_setEventType:(unsigned long long)a0;
- (void)_setLoggingProcessName:(id)a0;
- (BOOL)isTermsAlreadyArchived;
- (void)saveEventTextToFileIfNeeded;
- (void)saveTerms;
- (void)setAcknowledgedDeviceName:(id)a0;
- (void)setAcknowledgedDeviceSerialNumber:(id)a0;
- (void)setDisplayDeviceName:(id)a0;
- (void)setDisplayDeviceSerialNumber:(id)a0;
- (void)setDocumentationID:(id)a0;
- (void)setLoggingProcessName:(id)a0;
- (void)setPresentationLocation:(int)a0;
- (void)setPresentationReason:(id)a0;
- (void)setTermsText:(id)a0;
- (id)termsText;

@end
