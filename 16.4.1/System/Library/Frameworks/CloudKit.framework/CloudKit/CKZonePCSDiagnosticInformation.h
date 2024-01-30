@class NSString, NSError;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL wasRepaired;
@property (nonatomic) int pcsStatus;
@property (retain, nonatomic) NSString *pcsDiagnosticString;
@property (retain, nonatomic) NSError *pcsError;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
