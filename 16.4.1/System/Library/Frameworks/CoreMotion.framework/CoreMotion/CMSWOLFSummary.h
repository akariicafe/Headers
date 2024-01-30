@class NSData, NSUUID, NSDate;

@interface CMSWOLFSummary : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    double fSWOLF;
    double fFreestyleSWOLF;
    double fBackstrokeSWOLF;
    double fBreaststrokeSWOLF;
    double fButterflySWOLF;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) double SWOLF;
@property (readonly, nonatomic) double freestyleSWOLF;
@property (readonly, nonatomic) double backstrokeSWOLF;
@property (readonly, nonatomic) double breaststrokeSWOLF;
@property (readonly, nonatomic) double butterflySWOLF;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithCLSWOLFSummary:(const struct CLSWOLFSummary { double x0; double x1; unsigned char x2[16]; unsigned char x3[16]; double x4; double x5; double x6; double x7; double x8; } *)a0;
- (id)initWithSessionId:(id)a0 sourceId:(id)a1 startDate:(id)a2 endDate:(id)a3 SWOLF:(double)a4 freestyleSWOLF:(double)a5 backstrokeSWOLF:(double)a6 breaststrokeSWOLF:(double)a7 butterflySWOLF:(double)a8;

@end
